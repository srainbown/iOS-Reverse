//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CustomIOSAlertView.h"

@interface NetWorkSwitchAlertView : CustomIOSAlertView
{
    _Bool _isShow;
    CDUnknownBlockType _buttonClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType buttonClickBlock; // @synthesize buttonClickBlock=_buttonClickBlock;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)close;
- (void)show;
- (void)negativeBtnClick:(id)arg1;
- (void)positiveBtnClick:(id)arg1;
- (id)init;

@end

