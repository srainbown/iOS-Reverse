//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDTNetCallback.h"

@class NSString;

@interface GDTCGIBaseCallback : GDTNetCallback
{
    int _duration;
    int _statusCode;
    int _retCode;
    NSString *_request_url;
}

@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *request_url; // @synthesize request_url=_request_url;
- (void).cxx_destruct;

@end

