//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface FixHeader : NSObject
{
    NSMutableData *_packetData;
    struct {
        unsigned int _headInfo_offset:8;
        unsigned int _headInfo_len:8;
        unsigned int _dataLen_offset:8;
        unsigned int _dataLen_len:8;
    } packetFlag;
}

+ (int)getPacketSize;
- (void).cxx_destruct;
- (id)description;
- (void)setMessageInfo:(int)arg1;
- (int)getMessageInfo;
- (void)setDataLength:(unsigned long long)arg1;
- (int)getDataLength;
- (id)initWithInfo:(BOOL)arg1 andDataLen:(unsigned long long)arg2;
- (id)initWithFixData:(id)arg1;
- (id)getPacketData;
- (id)init;
- (void)initProtocolLayout;

@end

