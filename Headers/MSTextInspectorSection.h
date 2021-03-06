//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  6 2018 12:02:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSBaseInspectorSection.h"

#import "MSTextHeaderInspectorItemDelegate-Protocol.h"

@class MSMissingFontItem, MSParagraphStyleItem, MSTextHeaderInspectorItem, MSTextLayerItem, NSString;

@interface MSTextInspectorSection : MSBaseInspectorSection <MSTextHeaderInspectorItemDelegate>
{
    MSTextHeaderInspectorItem *_headerItem;
    MSTextLayerItem *_textItem;
    MSMissingFontItem *_missingFontItem;
    MSParagraphStyleItem *_paragraphStyleItem;
}

@property(retain, nonatomic) MSParagraphStyleItem *paragraphStyleItem; // @synthesize paragraphStyleItem=_paragraphStyleItem;
@property(retain, nonatomic) MSMissingFontItem *missingFontItem; // @synthesize missingFontItem=_missingFontItem;
@property(retain, nonatomic) MSTextLayerItem *textItem; // @synthesize textItem=_textItem;
@property(retain, nonatomic) MSTextHeaderInspectorItem *headerItem; // @synthesize headerItem=_headerItem;
- (void).cxx_destruct;
- (void)itemWantsToggleDetailSettings:(id)arg1;
- (void)item:(id)arg1 wantsSectionToCollapse:(BOOL)arg2;
- (void)updateItems;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

