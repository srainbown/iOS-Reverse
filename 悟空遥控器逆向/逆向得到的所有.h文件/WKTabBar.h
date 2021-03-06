//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBar.h"

#import "WKRemotePlusButtonDelegate.h"

@class NSString, WKRemotePlusButton;

@interface WKTabBar : UITabBar <WKRemotePlusButtonDelegate>
{
    id <WKTabBarDelegate> _tabBarDelegate;
    WKRemotePlusButton *_plusButton;
}

@property(retain, nonatomic) WKRemotePlusButton *plusButton; // @synthesize plusButton=_plusButton;
@property(nonatomic) __weak id <WKTabBarDelegate> tabBarDelegate; // @synthesize tabBarDelegate=_tabBarDelegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)onRemotePlusButtonClickDelegate;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

