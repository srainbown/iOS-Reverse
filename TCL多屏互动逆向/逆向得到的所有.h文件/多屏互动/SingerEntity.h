//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CommonData.h"

@class NSString;

@interface SingerEntity : CommonData
{
    NSString *_name;
    NSString *_pic;
    NSString *_pinYin;
}

@property(retain, nonatomic) NSString *pinYin; // @synthesize pinYin=_pinYin;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
- (void)dealloc;
- (id)initWithDataDic:(id)arg1;
- (id)init;
- (id)setAttributeDictionary;

@end

