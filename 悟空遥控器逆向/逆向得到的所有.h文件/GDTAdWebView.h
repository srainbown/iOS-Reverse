//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@class GDTBridge, NSString;

@interface GDTAdWebView : UIWebView
{
    NSString *_threadId;
    GDTBridge *_bridge;
    id <GDTAdLifeEventListener> _adLifeEventListener;
}

@property(retain) id <GDTAdLifeEventListener> adLifeEventListener; // @synthesize adLifeEventListener=_adLifeEventListener;
@property(retain) GDTBridge *bridge; // @synthesize bridge=_bridge;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onAdEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

