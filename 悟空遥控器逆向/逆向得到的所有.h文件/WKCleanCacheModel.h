//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WKCleanCacheModel : NSObject
{
    NSString *_name;
    double _size;
    long long _status;
}

+ (id)transformedValue:(double)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) double size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 size:(double)arg2 status:(long long)arg3;

@end

