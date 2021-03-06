//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString, NeuSocket;

@protocol NeuSocketDelegate <NSObject>

@optional
- (void)neuSocket:(NeuSocket *)arg1 didSendDataErrorWithSocketFd:(int)arg2;
- (void)neuSocket:(NeuSocket *)arg1 didSendDataWithSocketFd:(int)arg2;
- (void)neuSocket:(NeuSocket *)arg1 didCloseWithSocketFd:(int)arg2;
- (void)neuSocket:(NeuSocket *)arg1 didDisconnectFromRemoteWithSocketFd:(int)arg2;
- (void)neuSocket:(NeuSocket *)arg1 didReceiveDataErrorFromSocketFd:(int)arg2;
- (void)neuSocket:(NeuSocket *)arg1 didReceiveData:(NSData *)arg2 fromSocketFd:(int)arg3;
- (void)neuSocket:(NeuSocket *)arg1 didAcceptConnectFrom:(NSString *)arg2 port:(unsigned short)arg3 withSocketFd:(int)arg4;
@end

