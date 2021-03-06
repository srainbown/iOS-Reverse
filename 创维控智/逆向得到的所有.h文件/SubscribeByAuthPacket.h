//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface SubscribeByAuthPacket : NSObject
{
    unsigned char _version;
    BOOL _flag;
    unsigned short _msgID;
    NSData *_productIDData;
    NSData *_macAddressData;
    NSData *_authKeyData;
}

@property(nonatomic) BOOL flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned short msgID; // @synthesize msgID=_msgID;
@property(retain, nonatomic) NSData *authKeyData; // @synthesize authKeyData=_authKeyData;
@property(retain, nonatomic) NSData *macAddressData; // @synthesize macAddressData=_macAddressData;
@property(retain, nonatomic) NSData *productIDData; // @synthesize productIDData=_productIDData;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)getPacketData;
- (id)initWithVersion:(BOOL)arg1 withProductID:(id)arg2 withMacAddrwss:(id)arg3 withAuthKey:(id)arg4 withMessageID:(short)arg5 withFlag:(BOOL)arg6;

@end

