//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ALiHeader : NSObject
{
    int _checkSum;
    int _magicNum;
    int _reserve;
    int _size;
    int _type;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int reserve; // @synthesize reserve=_reserve;
@property(nonatomic) int magicNum; // @synthesize magicNum=_magicNum;
@property(nonatomic) int checkSum; // @synthesize checkSum=_checkSum;
- (id)init;

@end

