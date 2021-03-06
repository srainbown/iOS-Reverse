//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIWebViewDelegate.h"

@class GDTHandlerManager, NSString, UIViewController;

@interface GDTAdWebViewClient : NSObject <UIWebViewDelegate>
{
    GDTHandlerManager *_handlerManager;
    UIViewController *_rootViewController;
}

@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) GDTHandlerManager *handlerManager; // @synthesize handlerManager=_handlerManager;
- (void).cxx_destruct;
- (void)bindHandlers:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

