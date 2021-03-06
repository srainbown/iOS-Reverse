//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableDictionary, NSNumber, NSString, NSTimer;

@interface DeviceEntity : NSObject
{
    NSMutableDictionary *_valueSetDic;
    NSData *_partDispointData;
    int _part_datapoint_flag;
    NSString *_ticketStr;
    _Bool _isTimerSuppend;
    _Bool _isHeatInit;
    _Bool _userDisconnect;
    long long _lastDisconnectTime;
    _Bool _HeartBeating;
    int _localKeepAliveInterval;
    NSTimer *_pingTimer;
    NSString *_localAddress;
    BOOL _version;
    unsigned char _connectStatus;
    short _sessionID;
    unsigned short _deviceType;
    int _messageType;
    int _mcuHardVersion;
    int _mcuSoftVersion;
    int _devicePort;
    int _flag;
    int _deviceID;
    NSString *_fromIP;
    NSString *_deviceKey;
    NSData *_macAddress;
    NSString *_productID;
    double _lastGetPingReturn;
    NSNumber *_accessKey;
    NSNumber *_subKey;
    NSString *_deviceName;
}

@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) NSNumber *subKey; // @synthesize subKey=_subKey;
@property(retain, nonatomic) NSNumber *accessKey; // @synthesize accessKey=_accessKey;
@property(nonatomic) unsigned short deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic) double lastGetPingReturn; // @synthesize lastGetPingReturn=_lastGetPingReturn;
@property(nonatomic) unsigned char connectStatus; // @synthesize connectStatus=_connectStatus;
@property(nonatomic) int deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) int flag; // @synthesize flag=_flag;
@property(nonatomic) short sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) BOOL version; // @synthesize version=_version;
@property(nonatomic) int devicePort; // @synthesize devicePort=_devicePort;
@property(nonatomic) int mcuSoftVersion; // @synthesize mcuSoftVersion=_mcuSoftVersion;
@property(nonatomic) int mcuHardVersion; // @synthesize mcuHardVersion=_mcuHardVersion;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSData *macAddress; // @synthesize macAddress=_macAddress;
@property(copy, nonatomic) NSString *deviceKey; // @synthesize deviceKey=_deviceKey;
@property(copy, nonatomic) NSString *fromIP; // @synthesize fromIP=_fromIP;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (void)setLocalAddress:(id)arg1;
- (int)getLocalKeepAlive;
- (_Bool)isUserDisconnect;
- (void)userDisconnect;
- (void)onAppLogout;
- (void)onAppLogined;
- (void)onNetworkChange;
- (void)onDisconnectByConnectStatus:(unsigned char)arg1;
- (void)onConnected;
@property(readonly, nonatomic) _Bool isWANOnline;
@property(readonly, nonatomic) _Bool isLANOnline;
@property(readonly, nonatomic) _Bool isConnecting;
@property(readonly, nonatomic) _Bool isConnected;
- (void)resetDevice;
- (id)getDeviceKeyData;
- (id)getDeviceKeyString;
- (id)init;
- (int)getDeviceID;
- (id)getTicketString;
- (void)setTicketString:(id)arg1;
- (int)getSessionID;
- (id)initWithMac:(id)arg1 andProductID:(id)arg2;
- (void)initWithDictionary:(id)arg1 andProtocol:(int)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)getDictionaryFormat;
- (id)getDictionaryFormatWithProtocol:(int)arg1;
- (void)initProperty;
- (id)getLocalAddress;
- (id)getMacAddressSimple;
- (id)getMacAddressString;
- (void)setLastgetPingReturn:(double)arg1;
- (void)setDeviceInit:(_Bool)arg1;
- (_Bool)isHaveDataPoint;
- (_Bool)isHaveDeviceName;
- (_Bool)isDeviceBinded;
- (_Bool)isDeviceInitted;
- (_Bool)getInitStatus;
- (void)heartBeat;
- (void)stopHeatBeat;
- (void)startPingTimer;
- (void)startHeatBeat;
- (void)initPropertyWithData:(id)arg1;

@end

