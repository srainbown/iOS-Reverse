//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@interface WKHDLiveTonightListModel : NSObject
{
    _Bool _timeLight;
    NSArray *_list;
    NSString *_type;
    NSString *_time;
    NSNumber *_timestamp;
}

+ (id)objectClassInArray;
@property(nonatomic) _Bool timeLight; // @synthesize timeLight=_timeLight;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

