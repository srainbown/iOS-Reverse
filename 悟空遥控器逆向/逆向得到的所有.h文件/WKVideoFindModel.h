//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WKDianboChosenModel;

@interface WKVideoFindModel : NSObject
{
    NSArray *_list;
    NSString *_type;
    WKDianboChosenModel *_data;
    NSString *_next;
    double _cellHeight;
}

+ (void)getNextRecommendWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (void)getFindDataWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
+ (id)objectClassInArray;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) NSString *next; // @synthesize next=_next;
@property(retain, nonatomic) WKDianboChosenModel *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

