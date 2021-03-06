//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncSocketDelegate.h"
#import "GCDAsyncUdpSocketDelegate.h"
#import "NSURLConnectionDataDelegate.h"

@class ExtFixHeader, GCDAsyncSocket, GCDAsyncUdpSocket, NSLock, NSMutableData, NSMutableDictionary, NSObject<OS_dispatch_source>, NSString;

@interface SenderEngine : NSObject <NSURLConnectionDataDelegate, GCDAsyncUdpSocketDelegate, GCDAsyncSocketDelegate>
{
    NSMutableDictionary *_sslSetting;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_currentIp;
    int _appID;
    NSString *_authStr;
    NSMutableData *_httpReceiveData;
    NSObject<OS_dispatch_source> *_extTimer;
    ExtFixHeader *_fix;
    struct {
        unsigned int isHttpConnected:1;
        unsigned int isHttpConnectSuccessed:1;
        unsigned int isGoHttpProxy:1;
        unsigned int isDirectConnected:1;
        unsigned int isDirectConnectedSucessed:1;
        unsigned int isGoDirect:1;
        unsigned int isLoginSuccessed:1;
        unsigned int isTcpConnected:1;
    } _flag;
    NSLock *_lock;
    _Bool _userClose;
    GCDAsyncUdpSocket *_udpSocket;
    GCDAsyncSocket *_externalSocket;
    NSMutableDictionary *_subscription;
}

+ (id)sharedEngine;
@property(retain, nonatomic) NSMutableDictionary *subscription; // @synthesize subscription=_subscription;
@property(readonly, retain, nonatomic) GCDAsyncSocket *externalSocket; // @synthesize externalSocket=_externalSocket;
@property(readonly, retain, nonatomic) GCDAsyncUdpSocket *udpSocket; // @synthesize udpSocket=_udpSocket;
- (void).cxx_destruct;
- (void)printByteData:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)ex:(id)arg1;
- (void)socket:(id)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)getSSLSetting;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)initUdpSocket;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)udpSocket:(id)arg1 didNotConnect:(id)arg2;
- (void)udpSocket:(id)arg1 didConnectToAddress:(id)arg2;
- (void)sendDisconnectCM;
- (void)sendSetCloudDataPoints:(id)arg1 withDevice:(id)arg2 withMessageID:(unsigned short)arg3;
- (void)sendCloudProbeWithDevice:(id)arg1 andMessageID:(int)arg2 andFlag:(int)arg3;
- (void)sendCloudSetPropertyWithDevice:(id)arg1 andMessageID:(int)arg2 andFlag:(int)arg3;
- (void)sendCloudSubscribeDevice:(id)arg1 andAuthKey:(id)arg2 andMessageID:(int)arg3 andFlag:(BOOL)arg4;
- (void)sendSetDeviceAuthorize:(id)arg1 andMessageID:(int)arg2 andOldAuthKey:(id)arg3 andNewAuthKey:(id)arg4 andFlag:(int)arg5;
- (void)sendLocalProbeWithDevice:(id)arg1;
- (void)sendLocalHandShake:(id)arg1 withMessageID:(short)arg2 andVersion:(int)arg3 andAuthKey:(id)arg4 andFlag:(int)arg5;
- (void)sendSetLocalDataPoints:(id)arg1 withDevice:(id)arg2 withMessageID:(unsigned short)arg3;
- (void)getSubKeyWithAccessKey:(id)arg1 withDevice:(id)arg2 withMessageID:(short)arg3;
- (void)sendSetAccessKey:(id)arg1 withDevice:(id)arg2 withMessageID:(unsigned short)arg3 withFlag:(unsigned char)arg4;
- (void)sendLocalSetDeviceAuthorize:(id)arg1 andMessageID:(int)arg2 andOldAuthKey:(id)arg3 andNewAuthKey:(id)arg4 andFlag:(int)arg5;
- (void)sendLocalPipeWithDevice:(id)arg1 andMessageID:(int)arg2 andPayload:(id)arg3 andFlag:(int)arg4;
- (void)closeCloud;
- (void)pingCloud;
- (void)sendBoardcastWithData:(id)arg1;
- (void)sendScanWithProductID:(id)arg1;
- (void)stopHeart;
- (void)pingExt;
- (void)loginExt;
- (void)sendPipeReplyPacketWithDeviceID:(id)arg1 withMsgID:(unsigned short)arg2 withCode:(BOOL)arg3;
- (void)senderpipeWithDeviceID:(id)arg1 andMessageID:(int)arg2 andMessageFlag:(int)arg3 andPlaydata:(id)arg4;
- (void)loginByDirectWithHost:(id)arg1 andPort:(int)arg2;
- (void)loginByHttpProxyWithHost:(id)arg1;
- (void)loginWithVersion:(int)arg1 andAppID:(int)arg2 andAuthLength:(int)arg3 andAuthStr:(id)arg4 andKeepLive:(int)arg5;
- (void)connectExternal:(id)arg1 andPort:(int)arg2;
- (void)connect;
- (void)sendPingWithSessionID:(int)arg1 andDevice:(id)arg2;
- (void)sendByeBye:(int)arg1 andDevice:(id)arg2;
- (void)configSSLSetting;
- (void)dealloc;
- (id)init;
- (void)uninitUdpSocket;
- (void)stop;
- (void)start;
- (id)getSubscriptionDeviceByMsgID:(int)arg1;
- (void)udpSendDevice:(id)arg1 andData:(id)arg2;
- (void)directSendData:(id)arg1;
- (id)getPasswordHash:(id)arg1 withDevice:(id)arg2;
- (unsigned short)getServerPort;
- (id)getServerAddress;
- (id)md5:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

