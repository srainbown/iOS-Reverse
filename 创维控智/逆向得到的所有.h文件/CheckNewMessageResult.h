//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CheckNewMessageResult : NSObject
{
    _Bool _isNewContactMessage;
    int _error_code;
}

@property(nonatomic) int error_code; // @synthesize error_code=_error_code;
@property(nonatomic) _Bool isNewContactMessage; // @synthesize isNewContactMessage=_isNewContactMessage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

