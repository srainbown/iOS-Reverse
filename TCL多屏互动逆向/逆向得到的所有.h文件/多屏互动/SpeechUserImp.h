//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SpeechUserImp : NSObject
{
    int _logState;
    NSString *_usr;
    NSString *_pwd;
}

@property(copy) NSString *pwd; // @synthesize pwd=_pwd;
@property(copy) NSString *usr; // @synthesize usr=_usr;
- (void)dealloc;
- (BOOL)logout;
- (BOOL)login:(id)arg1 password:(id)arg2 params:(id)arg3;
- (int)getLoginSate;
- (id)init;

@end

