//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface ADBMessage : NSObject
{
    unsigned int _command;
    unsigned int _arg0;
    unsigned int _arg1;
    unsigned int _data_length;
    unsigned int _data_check;
    unsigned int _magic;
    NSData *_data;
}

+ (id)readyMessageDataWithLocalId:(int)arg1 remoteId:(int)arg2;
+ (id)closeMessageDataWithLocalId:(int)arg1 remoteId:(int)arg2;
+ (id)writeMessageDataWithLocalId:(int)arg1 remoteId:(int)arg2 data:(id)arg3;
+ (id)openMessageDataWithLocalId:(int)arg1 dest:(id)arg2;
+ (id)authMessageDataWithType:(int)arg1 data:(id)arg2;
+ (id)connectMessageData;
+ (int)dataChecksum:(id)arg1;
+ (id)messageDataWithCommand:(unsigned int)arg1 arg0:(unsigned int)arg2 arg1:(unsigned int)arg3 data:(id)arg4;
+ (id)messageWithData:(id)arg1;
+ (id)messageWithBytes:(const void *)arg1 length:(long long)arg2;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned int magic; // @synthesize magic=_magic;
@property(nonatomic) unsigned int data_check; // @synthesize data_check=_data_check;
@property(nonatomic) unsigned int data_length; // @synthesize data_length=_data_length;
@property(nonatomic) unsigned int arg1; // @synthesize arg1=_arg1;
@property(nonatomic) unsigned int arg0; // @synthesize arg0=_arg0;
@property(nonatomic) unsigned int command; // @synthesize command=_command;
- (void).cxx_destruct;

@end

