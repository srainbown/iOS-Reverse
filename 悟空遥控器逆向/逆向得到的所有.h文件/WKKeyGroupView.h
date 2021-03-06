//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView, UISectorButton;

@interface WKKeyGroupView : UIView
{
    _Bool _isFluct;
    double _selfY;
    UISectorButton *upButton;
    UISectorButton *downButton;
    UISectorButton *leftButton;
    UISectorButton *rightButton;
    UISectorButton *centerButton;
    UIImageView *bgImageView;
    NSTimer *longPressTimer;
    id <WKKeyGroupViewDelegate> _delegate;
    long long _memoryOfButtonWidth;
    long long _memoryOfImgWidth;
    long long _memoryOfImgHight;
}

@property long long memoryOfImgHight; // @synthesize memoryOfImgHight=_memoryOfImgHight;
@property long long memoryOfImgWidth; // @synthesize memoryOfImgWidth=_memoryOfImgWidth;
@property long long memoryOfButtonWidth; // @synthesize memoryOfButtonWidth=_memoryOfButtonWidth;
@property(nonatomic) __weak id <WKKeyGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *longPressTimer; // @synthesize longPressTimer;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView;
@property(retain, nonatomic) UISectorButton *centerButton; // @synthesize centerButton;
@property(retain, nonatomic) UISectorButton *rightButton; // @synthesize rightButton;
@property(retain, nonatomic) UISectorButton *leftButton; // @synthesize leftButton;
@property(retain, nonatomic) UISectorButton *downButton; // @synthesize downButton;
@property(retain, nonatomic) UISectorButton *upButton; // @synthesize upButton;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)pointInTriangle:(struct CGPoint)arg1 withv1:(struct CGPoint)arg2 withV2:(struct CGPoint)arg3 withV3:(struct CGPoint)arg4;
- (_Bool)isRightButtonTap:(struct CGPoint)arg1;
- (_Bool)isLeftButtonTap:(struct CGPoint)arg1;
- (_Bool)isDownButtonTap:(struct CGPoint)arg1;
- (_Bool)isUpButtonTap:(struct CGPoint)arg1;
- (int)getDirectWithPoint:(struct CGPoint)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)changeBgImage:(long long)arg1;
- (void)buttonTouchDown:(id)arg1;
- (void)keyCodeAction:(id)arg1;
- (void)passSignalValue:(id)arg1;
- (void)touchToOutside;
- (void)handleLongPress:(id)arg1;
- (void)setButtonWhenHidePanel;
- (void)setButtonWhenShowPanel;
- (void)initButtonView:(struct CGRect)arg1;
- (void)onPlateShown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withIsFluctuate:(_Bool)arg2;

@end

