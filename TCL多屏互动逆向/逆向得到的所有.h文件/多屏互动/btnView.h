//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface btnView : UIView
{
    int selectedId;
    id <btnViewDelegate> btnDelegate;
    UIImageView *btnBg;
}

@property(retain, nonatomic) UIImageView *btnBg; // @synthesize btnBg;
@property(retain, nonatomic) id <btnViewDelegate> btnDelegate; // @synthesize btnDelegate;
@property(nonatomic) int selectedId; // @synthesize selectedId;
- (void)btnClick:(id)arg1;
- (void)newCreatBtn;
- (id)initWithFrame:(struct CGRect)arg1;

@end

