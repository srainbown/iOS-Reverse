//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, WKMessageCenterApsModel;

@interface WKMessageCenterModel : NSObject
{
    NSString *_d;
    NSNumber *_p;
    NSString *_weburl;
    NSString *_msg;
    NSString *_image;
    NSString *_title;
    NSString *_payload;
    NSString *_notifyId;
    NSString *_pushpath;
    WKMessageCenterApsModel *_aps;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) WKMessageCenterApsModel *aps; // @synthesize aps=_aps;
@property(retain, nonatomic) NSString *pushpath; // @synthesize pushpath=_pushpath;
@property(retain, nonatomic) NSString *notifyId; // @synthesize notifyId=_notifyId;
@property(retain, nonatomic) NSString *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) NSString *weburl; // @synthesize weburl=_weburl;
@property(retain, nonatomic) NSNumber *p; // @synthesize p=_p;
@property(retain, nonatomic) NSString *d; // @synthesize d=_d;
- (void).cxx_destruct;

@end

