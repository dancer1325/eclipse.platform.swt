/*******************************************************************************
 * Copyright (c) 2000, 2007 IBM Corporation and others.
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *    IBM Corporation - initial API and implementation
 *******************************************************************************/

#include "swt.h"
#include "os_stats.h"

#ifdef NATIVE_STATS

int OS_nativeFunctionCount = 1255;
int OS_nativeFunctionCallCount[1255];
char * OS_nativeFunctionNames[] = {
	"AccessText_1AccessKey",
	"AccessText_1Text",
	"ApplicationCommands_1Cut",
	"ApplicationCommands_1Paste",
	"ApplicationCommands_1Redo",
	"ApplicationCommands_1Undo",
	"Application_1Dispatcher",
	"Application_1Run",
	"Application_1Shutdown",
	"Application_1ShutdownMode",
	"Application_1Windows",
	"ArrayList_1Clear",
	"ArrayList_1Count",
	"ArrayList_1Insert",
	"ArrayList_1RemoveAt",
	"ArrayList_1default__II",
	"ArrayList_1default__III",
	"Array_1CreateInstance",
	"Array_1GetLength",
	"Array_1GetValue",
	"Array_1SetValue",
	"BindingExpression_1UpdateTarget",
	"Binding_1Converter",
	"Binding_1ConverterParameter",
	"BitmapDecoder_1Create",
	"BitmapDecoder_1Frames",
	"BitmapEncoder_1Frames",
	"BitmapEncoder_1Save",
	"BitmapFrameCollection_1Add",
	"BitmapFrameCollection_1default",
	"BitmapFrame_1Create",
	"BitmapImage_1BeginInit",
	"BitmapImage_1CreateOptions",
	"BitmapImage_1EndInit",
	"BitmapImage_1UriSource",
	"BitmapPalette_1Colors",
	"BitmapSource_1Clone",
	"BitmapSource_1CopyPixels",
	"BitmapSource_1Create",
	"BitmapSource_1Format",
	"BitmapSource_1Palette",
	"BitmapSource_1PixelHeight",
	"BitmapSource_1PixelWidth",
	"Bitmap_1GetHicon",
	"Border_1typeid",
	"Brush_1Opacity",
	"Brushes_1Black",
	"Brushes_1LightSkyBlue",
	"Brushes_1Navy",
	"Brushes_1Transparent",
	"Brushes_1White",
	"ButtonBase_1Click",
	"Button_1IsDefault__I",
	"Button_1IsDefault__IZ",
	"Byte_1typeid",
	"CancelEventArgs_1Cancel",
	"Canvas_1GetLeft",
	"Canvas_1GetTop",
	"Canvas_1SetLeft",
	"Canvas_1SetTop",
	"CharacterHit_1FirstCharacterIndex",
	"CharacterHit_1TrailingLength",
	"CheckBox_1typeid",
	"Clipboard_1Clear",
	"Clipboard_1ContainsData",
	"Clipboard_1GetData",
	"Clipboard_1GetDataObject",
	"Clipboard_1GetText",
	"Clipboard_1SetData",
	"Clipboard_1SetDataObject",
	"CloseHandle",
	"ColorDialog_1AnyColor",
	"ColorDialog_1Color__I",
	"ColorDialog_1Color__II",
	"ColorDialog_1CustomColors__I",
	"ColorDialog_1CustomColors__II",
	"ColorList_1Add",
	"ColorList_1Count",
	"ColorList_1Current",
	"ColorList_1GetEnumerator",
	"Color_1A",
	"Color_1B",
	"Color_1FromArgb",
	"Color_1G",
	"Color_1R",
	"Colors_1Black",
	"Colors_1Blue",
	"Colors_1Cyan",
	"Colors_1DarkGray",
	"Colors_1Green",
	"Colors_1LightSkyBlue",
	"Colors_1Lime",
	"Colors_1Magenta",
	"Colors_1Maroon",
	"Colors_1Navy",
	"Colors_1Olive",
	"Colors_1Purple",
	"Colors_1Red",
	"Colors_1Silver",
	"Colors_1Teal",
	"Colors_1Transparent",
	"Colors_1White",
	"Colors_1Yellow",
	"ColumnDefinitionCollection_1Add",
	"ColumnDefinition_1Width",
	"ComboBox_1IsDropDownOpen__I",
	"ComboBox_1IsDropDownOpen__IZ",
	"ComboBox_1IsEditable",
	"ComboBox_1SelectionBoxItem",
	"CommandManager_1AddPreviewExecutedHandler",
	"CommonDialog_1ShowDialog",
	"CompositeCollection_1IndexOf",
	"CompositeCollection_1Insert",
	"CompositeCollection_1Remove",
	"CompositeCollection_1RemoveAt",
	"Console_1Beep",
	"ContainerVisual_1Clip__I",
	"ContainerVisual_1Clip__II",
	"ContentControl_1Content__I",
	"ContentControl_1Content__II",
	"ContentPresenter_1Content",
	"ContentPresenter_1typeid",
	"ContextMenuEventArgs_1CursorLeft",
	"ContextMenuEventArgs_1CursorTop",
	"ContextMenu_1Closed",
	"ContextMenu_1HorizontalOffset",
	"ContextMenu_1IsOpen",
	"ContextMenu_1Opened",
	"ContextMenu_1Placement",
	"ContextMenu_1VerticalOffset",
	"Control_1Background",
	"Control_1BackgroundProperty",
	"Control_1BorderBrushProperty",
	"Control_1BorderThickness",
	"Control_1BorderThicknessProperty",
	"Control_1FontFamily",
	"Control_1FontFamilyProperty",
	"Control_1FontSize",
	"Control_1FontSizeProperty",
	"Control_1FontStretch",
	"Control_1FontStretchProperty",
	"Control_1FontStyle",
	"Control_1FontStyleProperty",
	"Control_1FontWeight",
	"Control_1FontWeightProperty",
	"Control_1Foreground",
	"Control_1ForegroundProperty",
	"Control_1HorizontalContentAlignment__I",
	"Control_1HorizontalContentAlignment__II",
	"Control_1MouseDoubleClick",
	"Control_1Padding",
	"Control_1Template__I",
	"Control_1Template__II",
	"Control_1TemplateProperty",
	"Control_1VerticalContentAlignment",
	"CreateCursor",
	"CreateIconIndirect",
	"CreateProcessW",
	"CultureInfo_1CurrentUICulture",
	"CursorInteropHelper_1Create",
	"Cursors_1AppStarting",
	"Cursors_1Arrow",
	"Cursors_1Cross",
	"Cursors_1Hand",
	"Cursors_1Help",
	"Cursors_1IBeam",
	"Cursors_1No",
	"Cursors_1ScrollE",
	"Cursors_1ScrollN",
	"Cursors_1ScrollNE",
	"Cursors_1ScrollNW",
	"Cursors_1ScrollS",
	"Cursors_1ScrollSE",
	"Cursors_1ScrollSW",
	"Cursors_1ScrollW",
	"Cursors_1SizeAll",
	"Cursors_1SizeNESW",
	"Cursors_1SizeNS",
	"Cursors_1SizeNWSE",
	"Cursors_1SizeWE",
	"Cursors_1UpArrow",
	"Cursors_1Wait",
	"DashStyles_1Dash",
	"DashStyles_1DashDot",
	"DashStyles_1DashDotDot",
	"DashStyles_1Dot",
	"DashStyles_1Solid",
	"DataFormats_1FileDrop",
	"DataFormats_1Html",
	"DataFormats_1Rtf",
	"DataFormats_1UnicodeText",
	"DataObject_1GetData",
	"DataObject_1GetDataPresent",
	"DataObject_1GetFormats",
	"DataObject_1SetData",
	"DeleteGlobalRef",
	"DeleteObject",
	"DependencyObject_1ClearValue",
	"DependencyObject_1GetValue",
	"DependencyObject_1SetValue",
	"DestroyIcon",
	"DispatcherFrame_1Continue",
	"DispatcherHookEventArgs_1Operation",
	"DispatcherHooks_1DispatcherInactive",
	"DispatcherHooks_1OperationAborted",
	"DispatcherHooks_1OperationCompleted",
	"DispatcherHooks_1OperationPosted",
	"DispatcherOperation_1Priority",
	"DispatcherTimer_1Interval",
	"DispatcherTimer_1Start",
	"DispatcherTimer_1Stop",
	"DispatcherTimer_1Tag__I",
	"DispatcherTimer_1Tag__II",
	"DispatcherTimer_1Tick",
	"Dispatcher_1BeginInvoke",
	"Dispatcher_1Hooks",
	"Dispatcher_1PushFrame",
	"DockPanel_1DockProperty",
	"DockPanel_1typeid",
	"DoubleAnimationUsingKeyFrames_1KeyFrames",
	"DoubleCollection_1Add",
	"DoubleKeyFrameCollection_1Add",
	"DragDrop_1DoDragDrop",
	"DragEventArgs_1AllowedEffects",
	"DragEventArgs_1Data",
	"DragEventArgs_1Effects__I",
	"DragEventArgs_1Effects__II",
	"DragEventArgs_1GetPosition",
	"DragEventArgs_1KeyStates",
	"DrawingColor_1FromArgb",
	"DrawingColor_1ToArgb",
	"DrawingContext_1Close",
	"DrawingContext_1DrawEllipse",
	"DrawingContext_1DrawGeometry",
	"DrawingContext_1DrawImage",
	"DrawingContext_1DrawLine",
	"DrawingContext_1DrawRectangle",
	"DrawingContext_1DrawRoundedRectangle",
	"DrawingContext_1DrawText",
	"DrawingContext_1Pop",
	"DrawingContext_1PushClip",
	"DrawingContext_1PushOpacity",
	"DrawingContext_1PushTransform",
	"DrawingFontFamily_1Name",
	"DrawingVisual_1RenderOpen",
	"DrawingVisual_1typeid",
	"EditingCommands_1Backspace",
	"EditingCommands_1Delete",
	"EditingCommands_1DeleteNextWord",
	"EditingCommands_1DeletePreviousWord",
	"EnableWindow",
	"Environment_1ExpandEnvironmentVariables",
	"ExecutedRoutedEventArgs_1Command",
	"ExecutedRoutedEventArgs_1Handled",
	"Expander_1Collapsed",
	"Expander_1Expanded",
	"Expander_1IsExpanded__I",
	"Expander_1IsExpanded__IZ",
	"ExtractIconExW",
	"FileDialog_1FileName",
	"FileDialog_1FileNames",
	"FileDialog_1Filter",
	"FileDialog_1InitialDirectory",
	"FileDialog_1Title",
	"FileInfo_1DirectoryName",
	"FileInfo_1Name",
	"File_1Exists",
	"FocusManager_1GetFocusScope",
	"FocusManager_1GetFocusedElement",
	"FolderBrowserDialog_1Description",
	"FolderBrowserDialog_1SelectedPath__I",
	"FolderBrowserDialog_1SelectedPath__II",
	"FontDialog_1Color__I",
	"FontDialog_1Color__II",
	"FontDialog_1Font__I",
	"FontDialog_1Font__II",
	"FontDialog_1ShowColor",
	"FontFamily_1GetTypefaces",
	"FontFamily_1Source",
	"FontStretch_1FromOpenTypeStretch",
	"FontStretch_1ToOpenTypeStretch",
	"FontStretches_1Normal",
	"FontStyles_1Italic",
	"FontStyles_1Normal",
	"FontStyles_1Oblique",
	"FontWeight_1FromOpenTypeWeight",
	"FontWeight_1ToOpenTypeWeight",
	"FontWeights_1Bold",
	"FontWeights_1Normal",
	"Font_1FontFamily",
	"Font_1Size",
	"Font_1Style",
	"Fonts_1GetTypefaces",
	"Fonts_1SystemTypefaces",
	"FormattedText_1Baseline",
	"FormattedText_1BuildGeometry",
	"FormattedText_1BuildHighlightGeometry",
	"FormattedText_1Height",
	"FormattedText_1SetTextDecorations",
	"FormattedText_1WidthIncludingTrailingWhitespace",
	"FormsCommonDialog_1ShowDialog",
	"Frame_1CanGoBack",
	"Frame_1CanGoForward",
	"Frame_1CurrentSource",
	"Frame_1GoBack",
	"Frame_1GoForward",
	"Frame_1Navigate",
	"Frame_1NavigationUIVisibility",
	"Frame_1Refresh",
	"Frame_1Source__I",
	"Frame_1Source__II",
	"Frame_1StopLoading",
	"FrameworkContentElement_1Parent",
	"FrameworkContentElement_1Tag__I",
	"FrameworkContentElement_1Tag__II",
	"FrameworkContentElement_1typeid",
	"FrameworkElementFactory_1AppendChild",
	"FrameworkElementFactory_1SetBinding",
	"FrameworkElementFactory_1SetValue__III",
	"FrameworkElementFactory_1SetValue__IIZ",
	"FrameworkElementFactory_1SetValueDock",
	"FrameworkElementFactory_1SetValueOrientation",
	"FrameworkElementFactory_1SetValueStretch",
	"FrameworkElementFactory_1SetValueVerticalAlignment",
	"FrameworkElementFactory_1SetValueVisibility",
	"FrameworkElement_1ActualHeight",
	"FrameworkElement_1ActualHeightProperty",
	"FrameworkElement_1ActualWidth",
	"FrameworkElement_1ActualWidthProperty",
	"FrameworkElement_1BeginInit",
	"FrameworkElement_1BringIntoView",
	"FrameworkElement_1ContextMenu",
	"FrameworkElement_1ContextMenuClosing",
	"FrameworkElement_1ContextMenuOpening",
	"FrameworkElement_1Cursor",
	"FrameworkElement_1CursorProperty",
	"FrameworkElement_1FlowDirection__I",
	"FrameworkElement_1FlowDirection__II",
	"FrameworkElement_1FocusVisualStyle",
	"FrameworkElement_1GetBindingExpression",
	"FrameworkElement_1Height__I",
	"FrameworkElement_1Height__ID",
	"FrameworkElement_1HeightProperty",
	"FrameworkElement_1HorizontalAlignment",
	"FrameworkElement_1IsLoaded",
	"FrameworkElement_1Loaded",
	"FrameworkElement_1Margin__I",
	"FrameworkElement_1Margin__II",
	"FrameworkElement_1MarginProperty",
	"FrameworkElement_1MinHeight__I",
	"FrameworkElement_1MinHeight__ID",
	"FrameworkElement_1MinWidth__I",
	"FrameworkElement_1MinWidth__ID",
	"FrameworkElement_1Name",
	"FrameworkElement_1NameProperty",
	"FrameworkElement_1Parent",
	"FrameworkElement_1Resources__I",
	"FrameworkElement_1Resources__II",
	"FrameworkElement_1SizeChanged",
	"FrameworkElement_1Style__I",
	"FrameworkElement_1Style__II",
	"FrameworkElement_1StyleProperty",
	"FrameworkElement_1Tag__I",
	"FrameworkElement_1Tag__II",
	"FrameworkElement_1ToolTip__I",
	"FrameworkElement_1ToolTip__II",
	"FrameworkElement_1VerticalAlignment",
	"FrameworkElement_1VerticalAlignmentProperty",
	"FrameworkElement_1Width__I",
	"FrameworkElement_1Width__ID",
	"FrameworkElement_1WidthProperty",
	"FrameworkElement_1typeid",
	"FrameworkTemplate_1FindName",
	"FrameworkTemplate_1VisualTree",
	"Freezable_1CanFreeze",
	"Freezable_1Clone",
	"Freezable_1Freeze",
	"GCHandle_1Alloc",
	"GCHandle_1Dump",
	"GCHandle_1Free",
	"GCHandle_1ToHandle",
	"GeometryCollection_1Add",
	"GeometryCollection_1Clear",
	"GeometryCollection_1Count",
	"GeometryCollection_1Remove",
	"GeometryGroup_1Children__I",
	"GeometryGroup_1Children__II",
	"Geometry_1Bounds",
	"Geometry_1Clone",
	"Geometry_1FillContains",
	"Geometry_1FillContainsWithDetail",
	"Geometry_1GetFlattenedPathGeometry",
	"Geometry_1IsEmpty",
	"Geometry_1StrokeContains",
	"Geometry_1Transform__I",
	"Geometry_1Transform__II",
	"GetCursorPos",
	"GetIconInfo",
	"GetKeyboardState",
	"GetModuleHandleW",
	"GetProcessHeap",
	"GiveFeedbackEventArgs_1Effects",
	"GlyphRun_1BidiLevel",
	"GradientBrush_1MappingMode",
	"GradientBrush_1SpreadMethod",
	"GridViewColumnCollection_1Clear",
	"GridViewColumnCollection_1Count",
	"GridViewColumnCollection_1IndexOf",
	"GridViewColumnCollection_1Insert",
	"GridViewColumnCollection_1Remove",
	"GridViewColumnCollection_1default",
	"GridViewColumnHeader_1Content",
	"GridViewColumn_1ActualWidth",
	"GridViewColumn_1CellTemplate__I",
	"GridViewColumn_1CellTemplate__II",
	"GridViewColumn_1Header__I",
	"GridViewColumn_1Header__II",
	"GridViewColumn_1HeaderTemplate__I",
	"GridViewColumn_1HeaderTemplate__II",
	"GridViewColumn_1Width__I",
	"GridViewColumn_1Width__ID",
	"GridViewColumn_1WidthProperty",
	"GridViewHeaderRowPresenter_1typeid",
	"GridViewRowPresenterBase_1Columns",
	"GridViewRowPresenterBase_1ColumnsProperty",
	"GridViewRowPresenter_1Content__I",
	"GridViewRowPresenter_1Content__II",
	"GridViewRowPresenter_1typeid",
	"GridView_1AllowsColumnReorder",
	"GridView_1ColumnHeaderContainerStyle",
	"GridView_1Columns",
	"Grid_1ColumnDefinitions",
	"Grid_1RowDefinitions",
	"Grid_1SetColumn",
	"Grid_1SetColumnSpan",
	"Grid_1SetRow",
	"Grid_1SetRowSpan",
	"HeaderedContentControl_1Header__I",
	"HeaderedContentControl_1Header__II",
	"HeaderedItemsControl_1Header__I",
	"HeaderedItemsControl_1Header__II",
	"HeaderedItemsControl_1HeaderTemplateProperty",
	"HeapAlloc",
	"HeapFree",
	"HtmlDocument_1InvokeScript",
	"HwndSource_1Handle",
	"Hyperlink_1Click",
	"ICollection_1Count",
	"IEnumerable_1GetEnumerator",
	"IEnumerator_1Current",
	"IEnumerator_1MoveNext",
	"IList_1Add",
	"IList_1GetEnumerator",
	"IList_1IndexOf",
	"IList_1Insert",
	"IList_1Remove",
	"IList_1default",
	"ImageSource_1typeid",
	"Image_1Source",
	"Image_1SourceProperty",
	"Image_1Stretch",
	"Image_1StretchProperty",
	"Image_1typeid",
	"Imaging_1CreateBitmapSourceFromHIcon",
	"IndexedGlyphRunCollection_1Current",
	"IndexedGlyphRunCollection_1GetEnumerator",
	"IndexedGlyphRun_1GlyphRun",
	"IndexedGlyphRun_1TextSourceCharacterIndex",
	"IndexedGlyphRun_1TextSourceLength",
	"InlineCollection_1Add",
	"InlineCollection_1Clear",
	"InputEventArgs_1Timestamp",
	"Int32Rect_1Empty",
	"IntPtr_1ToInt32",
	"ItemCollection_1Add",
	"ItemCollection_1Clear",
	"ItemCollection_1Count",
	"ItemCollection_1CurrentItem",
	"ItemCollection_1CurrentPosition",
	"ItemCollection_1GetItemAt",
	"ItemCollection_1IndexOf",
	"ItemCollection_1Insert",
	"ItemCollection_1Remove",
	"ItemCollection_1RemoveAt",
	"ItemsControl_1HasItems",
	"ItemsControl_1IsTextSearchEnabled",
	"ItemsControl_1Items",
	"ItemsControl_1ItemsSource",
	"ItemsPresenter_1typeid",
	"JNIGetObject",
	"KeyEventArgs_1IsDown",
	"KeyEventArgs_1IsRepeat",
	"KeyEventArgs_1IsToggled",
	"KeyEventArgs_1Key",
	"KeyEventArgs_1SystemKey",
	"KeyInterop_1VirtualKeyFromKey",
	"KeyTime_1Uniform",
	"KeyboardDevice_1Modifiers",
	"KeyboardEventArgs_1KeyboardDevice",
	"KeyboardNavigation_1GetIsTabStop",
	"KeyboardNavigation_1SetControlTabNavigation",
	"KeyboardNavigation_1SetDirectionalNavigation",
	"KeyboardNavigation_1SetIsTabStop",
	"KeyboardNavigation_1SetTabNavigation",
	"Keyboard_1Focus",
	"Keyboard_1FocusedElement",
	"Keyboard_1Modifiers",
	"ListBoxItem_1IsSelected__I",
	"ListBoxItem_1IsSelected__IZ",
	"ListBox_1ScrollIntoView",
	"ListBox_1SelectAll",
	"ListBox_1SelectedItems",
	"ListBox_1SelectionMode",
	"ListBox_1UnselectAll",
	"ListView_1View",
	"LoadImage",
	"MapVirtualKeyW",
	"MatrixTransform_1Matrix__I",
	"MatrixTransform_1Matrix__II",
	"Matrix_1Invert",
	"Matrix_1IsIdentity",
	"Matrix_1M11__I",
	"Matrix_1M11__ID",
	"Matrix_1M12__I",
	"Matrix_1M12__ID",
	"Matrix_1M21__I",
	"Matrix_1M21__ID",
	"Matrix_1M22__I",
	"Matrix_1M22__ID",
	"Matrix_1Multiply",
	"Matrix_1OffsetX__I",
	"Matrix_1OffsetX__ID",
	"Matrix_1OffsetY__I",
	"Matrix_1OffsetY__ID",
	"Matrix_1RotatePrepend",
	"Matrix_1ScalePrepend",
	"Matrix_1Transform",
	"Matrix_1TranslatePrepend",
	"MenuItem_1Click",
	"MenuItem_1Icon",
	"MenuItem_1InputGestureText",
	"MenuItem_1IsCheckable",
	"MenuItem_1IsChecked__I",
	"MenuItem_1IsChecked__IZ",
	"MenuItem_1SubmenuClosed",
	"MenuItem_1SubmenuOpened",
	"Menu_1IsMainMenu",
	"MessageBox_1Show",
	"MouseButtonEventArgs_1ButtonState",
	"MouseButtonEventArgs_1ChangedButton",
	"MouseButtonEventArgs_1ClickCount",
	"MouseEventArgs_1GetPosition",
	"MouseEventArgs_1LeftButton",
	"MouseEventArgs_1MiddleButton",
	"MouseEventArgs_1RightButton",
	"MouseEventArgs_1XButton1",
	"MouseEventArgs_1XButton2",
	"MouseWheelEventArgs_1Delta",
	"Mouse_1Captured",
	"Mouse_1DirectlyOver",
	"Mouse_1GetPosition",
	"Mouse_1LeftButton",
	"Mouse_1MiddleButton",
	"Mouse_1RightButton",
	"Mouse_1SetCursor",
	"Mouse_1XButton1",
	"Mouse_1XButton2",
	"MoveMemory",
	"NewGlobalRef",
	"Object_1Equals",
	"Object_1GetType",
	"Object_1ToString",
	"OpenFileDialog_1Multiselect",
	"PROCESS_1INFORMATION_1sizeof",
	"Panel_1Background__I",
	"Panel_1Background__II",
	"Panel_1BackgroundProperty",
	"Panel_1Children",
	"Panel_1GetZIndex",
	"Panel_1SetZIndex",
	"PasswordBox_1MaxLength__I",
	"PasswordBox_1MaxLength__II",
	"PasswordBox_1Password__I",
	"PasswordBox_1Password__II",
	"PasswordBox_1PasswordChanged",
	"PasswordBox_1PasswordChar__I",
	"PasswordBox_1PasswordChar__IC",
	"PasswordBox_1Paste",
	"PathFigureCollection_1Add",
	"PathFigureCollection_1Count",
	"PathFigure_1IsClosed__I",
	"PathFigure_1IsClosed__IZ",
	"PathFigure_1Segments__I",
	"PathFigure_1Segments__II",
	"PathFigure_1StartPoint",
	"PathGeometry_1AddGeometry",
	"PathGeometry_1Bounds",
	"PathGeometry_1Figures__I",
	"PathGeometry_1Figures__II",
	"PathGeometry_1FillRule",
	"PathSegmentCollection_1Add",
	"PathSegmentCollection_1Count",
	"Path_1Data",
	"Path_1Fill",
	"Path_1Stretch",
	"Pen_1Brush__I",
	"Pen_1Brush__II",
	"Pen_1DashCap",
	"Pen_1DashStyle",
	"Pen_1EndLineCap",
	"Pen_1LineJoin",
	"Pen_1MiterLimit",
	"Pen_1StartLineCap",
	"Pen_1Thickness",
	"PixelFormat_1BitsPerPixel",
	"PixelFormats_1Bgr101010",
	"PixelFormats_1Bgr24",
	"PixelFormats_1Bgr32",
	"PixelFormats_1Bgr555",
	"PixelFormats_1Bgr565",
	"PixelFormats_1Bgra32",
	"PixelFormats_1BlackWhite",
	"PixelFormats_1Default",
	"PixelFormats_1Indexed1",
	"PixelFormats_1Indexed2",
	"PixelFormats_1Indexed4",
	"PixelFormats_1Indexed8",
	"PixelFormats_1Pbgra32",
	"PixelFormats_1Rgb24",
	"PointCollection_1Add",
	"Point_1X",
	"Point_1Y",
	"Popup_1AllowsTransparency",
	"Popup_1Child__I",
	"Popup_1Child__II",
	"Popup_1Closed",
	"Popup_1HorizontalOffset__I",
	"Popup_1HorizontalOffset__ID",
	"Popup_1IsOpen__I",
	"Popup_1IsOpen__IZ",
	"Popup_1Opened",
	"Popup_1VerticalOffset__I",
	"Popup_1VerticalOffset__ID",
	"PresentationSource_1CurrentSources",
	"PresentationSource_1FromVisual",
	"PresentationSource_1RootVisual",
	"ProgressBar_1IsIndeterminate__I",
	"ProgressBar_1IsIndeterminate__IZ",
	"ProgressBar_1Orientation",
	"PropertyInfo_1SetValue",
	"PropertyInfo_1SetValueBoolean",
	"QueryContinueDragEventArgs_1Action",
	"QueryContinueDragEventArgs_1EscapePressed",
	"RangeBase_1LargeChange__I",
	"RangeBase_1LargeChange__ID",
	"RangeBase_1Maximum__I",
	"RangeBase_1Maximum__ID",
	"RangeBase_1Minimum__I",
	"RangeBase_1Minimum__ID",
	"RangeBase_1SmallChange__I",
	"RangeBase_1SmallChange__ID",
	"RangeBase_1Value__I",
	"RangeBase_1Value__ID",
	"RangeBase_1ValueChanged",
	"Rect_1Contains",
	"Rect_1Height__I",
	"Rect_1Height__ID",
	"Rect_1Intersect",
	"Rect_1Union",
	"Rect_1Width__I",
	"Rect_1Width__ID",
	"Rect_1X__I",
	"Rect_1X__ID",
	"Rect_1Y__I",
	"Rect_1Y__ID",
	"RegistryKey_1GetSubKeyNames",
	"RegistryKey_1GetValue",
	"RegistryKey_1OpenSubKey",
	"Registry_1ClassesRoot",
	"RenderOptions_1GetBitmapScalingMode",
	"RenderOptions_1SetBitmapScalingMode",
	"RenderOptions_1SetEdgeMode",
	"RenderTargetBitmap_1Render",
	"RepeatBehavior_1Forever",
	"ResourceDictionary_1Source",
	"RoutedEventArgs_1Handled",
	"RoutedEventArgs_1OriginalSource",
	"RoutedEventArgs_1Source",
	"RoutedEventArgs_1typeid",
	"RoutedPropertyChangedEventArgs_1NewValue",
	"RoutedPropertyChangedEventArgs_1OldValue",
	"RowDefinitionCollection_1Add",
	"RowDefinition_1Height",
	"Run_1Text",
	"SHELLEXECUTEINFOW_1sizeof",
	"STARTUPINFOW_1sizeof",
	"SWTCanvas_1Visual__I",
	"SWTCanvas_1Visual__II",
	"SWTRow_1NotifyPropertyChanged",
	"SWTTextRunProperties_1ForegroundBrush",
	"ScrollBar_1Orientation__I",
	"ScrollBar_1Orientation__II",
	"ScrollBar_1Scroll",
	"ScrollBar_1ViewportSize__I",
	"ScrollBar_1ViewportSize__ID",
	"ScrollBar_1typeid",
	"ScrollEventArgs_1ScrollEventType",
	"ScrollViewer_1SetHorizontalScrollBarVisibility",
	"ScrollViewer_1SetVerticalScrollBarVisibility",
	"ScrollViewer_1typeid",
	"SelectionChangedEventArgs_1AddedItems",
	"SelectionChangedEventArgs_1RemovedItems",
	"Selector_1IsSynchronizedWithCurrentItem",
	"Selector_1SelectedIndex__I",
	"Selector_1SelectedIndex__II",
	"Selector_1SelectedItem",
	"Selector_1SelectedValue",
	"Selector_1SelectionChanged",
	"SetCursorPos",
	"SetterBaseCollection_1Add",
	"Shape_1Fill",
	"Shape_1Stroke",
	"Shape_1StrokeThickness",
	"ShellExecuteExW",
	"SizeChangedEventArgs_1NewSize",
	"SizeChangedEventArgs_1PreviousSize",
	"Size_1Height__I",
	"Size_1Height__ID",
	"Size_1Width__I",
	"Size_1Width__ID",
	"Slider_1Orientation",
	"Slider_1TickFrequency",
	"Slider_1TickPlacement",
	"StackPanel_1Orientation",
	"StackPanel_1OrientationProperty",
	"StackPanel_1typeid",
	"StreamGeometryContext_1BeginFigure",
	"StreamGeometryContext_1Close",
	"StreamGeometryContext_1LineTo",
	"StreamGeometry_1Open",
	"String_1Length",
	"String_1ToCharArray",
	"String_1typeid",
	"Style_1Setters",
	"SystemColors_1ActiveBorderBrush",
	"SystemColors_1ActiveBorderColor",
	"SystemColors_1ActiveCaptionColor",
	"SystemColors_1ActiveCaptionTextColor",
	"SystemColors_1ControlBrush",
	"SystemColors_1ControlColor",
	"SystemColors_1ControlDarkColor",
	"SystemColors_1ControlDarkDarkColor",
	"SystemColors_1ControlLightColor",
	"SystemColors_1ControlLightLightColor",
	"SystemColors_1ControlTextBrush",
	"SystemColors_1ControlTextColor",
	"SystemColors_1GradientActiveCaptionColor",
	"SystemColors_1GradientInactiveCaptionColor",
	"SystemColors_1HighlightBrush",
	"SystemColors_1HighlightColor",
	"SystemColors_1HighlightTextColor",
	"SystemColors_1InactiveCaptionColor",
	"SystemColors_1InactiveCaptionTextColor",
	"SystemColors_1InfoColor",
	"SystemColors_1InfoTextColor",
	"SystemColors_1WindowColor",
	"SystemColors_1WindowTextColor",
	"SystemFonts_1MessageFontFamily",
	"SystemFonts_1MessageFontSize",
	"SystemFonts_1MessageFontStyle",
	"SystemFonts_1MessageFontWeight",
	"SystemParameters_1HighContrast",
	"SystemParameters_1HorizontalScrollBarButtonWidth",
	"SystemParameters_1HorizontalScrollBarHeight",
	"SystemParameters_1MinimumHorizontalDragDistance",
	"SystemParameters_1MinimumVerticalDragDistance",
	"SystemParameters_1PrimaryScreenHeight",
	"SystemParameters_1PrimaryScreenWidth",
	"SystemParameters_1ThinHorizontalBorderHeight",
	"SystemParameters_1ThinVerticalBorderWidth",
	"SystemParameters_1VerticalScrollBarButtonHeight",
	"SystemParameters_1VerticalScrollBarWidth",
	"SystemParameters_1VirtualScreenHeight",
	"SystemParameters_1VirtualScreenLeft",
	"SystemParameters_1VirtualScreenTop",
	"SystemParameters_1VirtualScreenWidth",
	"SystemParameters_1WheelScrollLines",
	"SystemParameters_1WorkArea",
	"TabControl_1TabStripPlacement",
	"TabItem_1IsSelected",
	"TextBlock_1Background",
	"TextBlock_1BackgroundProperty",
	"TextBlock_1FontFamily",
	"TextBlock_1FontFamilyProperty",
	"TextBlock_1FontSize",
	"TextBlock_1FontSizeProperty",
	"TextBlock_1FontStretch",
	"TextBlock_1FontStretchProperty",
	"TextBlock_1FontStyle",
	"TextBlock_1FontStyleProperty",
	"TextBlock_1FontWeight",
	"TextBlock_1FontWeightProperty",
	"TextBlock_1Foreground",
	"TextBlock_1ForegroundProperty",
	"TextBlock_1Inlines",
	"TextBlock_1Text",
	"TextBlock_1TextProperty",
	"TextBlock_1typeid",
	"TextBoundsCollection_1Current",
	"TextBoundsCollection_1GetEnumerator",
	"TextBounds_1Rectangle",
	"TextBoxBase_1AcceptsReturn",
	"TextBoxBase_1AcceptsTab",
	"TextBoxBase_1AppendText",
	"TextBoxBase_1Copy",
	"TextBoxBase_1Cut",
	"TextBoxBase_1HorizontalScrollBarVisibility",
	"TextBoxBase_1IsReadOnly__I",
	"TextBoxBase_1IsReadOnly__IZ",
	"TextBoxBase_1Paste",
	"TextBoxBase_1ScrollToEnd",
	"TextBoxBase_1ScrollToVerticalOffset",
	"TextBoxBase_1SelectAll",
	"TextBoxBase_1TextChanged",
	"TextBoxBase_1VerticalOffset",
	"TextBoxBase_1VerticalScrollBarVisibility",
	"TextBox_1CaretIndex__I",
	"TextBox_1CaretIndex__II",
	"TextBox_1GetFirstVisibleLineIndex",
	"TextBox_1GetLineIndexFromCharacterIndex",
	"TextBox_1GetRectFromCharacterIndex",
	"TextBox_1LineCount",
	"TextBox_1MaxLength__I",
	"TextBox_1MaxLength__II",
	"TextBox_1ScrollToLine",
	"TextBox_1Select",
	"TextBox_1SelectedText__I",
	"TextBox_1SelectedText__II",
	"TextBox_1SelectionLength__I",
	"TextBox_1SelectionLength__II",
	"TextBox_1SelectionStart__I",
	"TextBox_1SelectionStart__II",
	"TextBox_1Text__I",
	"TextBox_1Text__II",
	"TextBox_1TextWrapping",
	"TextCompositionEventArgs_1ControlText",
	"TextCompositionEventArgs_1Handled",
	"TextCompositionEventArgs_1SystemText",
	"TextCompositionEventArgs_1Text",
	"TextDecorationCollection_1Add",
	"TextDecorations_1Strikethrough",
	"TextDecorations_1Underline",
	"TextFormatter_1Create",
	"TextFormatter_1FormatLine",
	"TextLine_1Baseline",
	"TextLine_1Draw",
	"TextLine_1GetCharacterHitFromDistance",
	"TextLine_1GetDistanceFromCharacterHit",
	"TextLine_1GetIndexedGlyphRuns",
	"TextLine_1GetNextCaretCharacterHit",
	"TextLine_1GetPreviousCaretCharacterHit",
	"TextLine_1GetTextBounds",
	"TextLine_1GetTextLineBreak",
	"TextLine_1Height",
	"TextLine_1Length",
	"TextLine_1NewlineLength",
	"TextLine_1Start",
	"TextLine_1Width",
	"TextLine_1WidthIncludingTrailingWhitespace",
	"TextTabPropertiesCollection_1Add",
	"Thickness_1Bottom",
	"Thickness_1Left",
	"Thickness_1Right",
	"Thickness_1Top",
	"TileBrush_1AlignmentX",
	"TileBrush_1AlignmentY",
	"TileBrush_1Stretch",
	"TileBrush_1TileMode",
	"TileBrush_1Viewport",
	"TileBrush_1ViewportUnits",
	"TimeSpan_1FromMilliseconds",
	"Timeline_1AutoReverse",
	"Timeline_1Duration",
	"Timeline_1RepeatBehavior",
	"ToUnicode",
	"ToggleButton_1Checked",
	"ToggleButton_1CheckedEvent",
	"ToggleButton_1IndeterminateEvent",
	"ToggleButton_1IsChecked__I",
	"ToggleButton_1IsChecked__IZ",
	"ToggleButton_1IsCheckedNullSetter",
	"ToggleButton_1IsCheckedProperty",
	"ToggleButton_1IsThreeStateProperty",
	"ToggleButton_1Unchecked",
	"ToggleButton_1UncheckedEvent",
	"ToolBarTray_1Background",
	"ToolBarTray_1IsLocked__I",
	"ToolBarTray_1IsLocked__IZ",
	"ToolBarTray_1Orientation",
	"ToolBarTray_1ToolBars",
	"ToolBar_1Band__I",
	"ToolBar_1Band__II",
	"ToolBar_1BandIndex__I",
	"ToolBar_1BandIndex__II",
	"ToolBar_1HasOverflowItems",
	"ToolBar_1SetOverflowMode",
	"ToolBar_1typeid",
	"TransformCollection_1Add",
	"TransformGroup_1Children",
	"Transform_1Clone",
	"TreeViewItem_1CollapsedEvent",
	"TreeViewItem_1ExpandedEvent",
	"TreeViewItem_1HeaderTemplate__I",
	"TreeViewItem_1HeaderTemplate__II",
	"TreeViewItem_1HeaderTemplateProperty",
	"TreeViewItem_1IsExpanded__I",
	"TreeViewItem_1IsExpanded__IZ",
	"TreeViewItem_1IsSelected__I",
	"TreeViewItem_1IsSelected__IZ",
	"TreeView_1SelectedItem",
	"TreeView_1SelectedItemChanged",
	"TreeView_1typeid",
	"TypeConverter_1ConvertFromString",
	"TypeConverter_1ConvertToString",
	"TypeDescriptor_1GetConverter",
	"Type_1FullName",
	"Type_1GetProperty",
	"Type_1IsInstanceOfType",
	"TypefaceCollection_1Count",
	"TypefaceCollection_1Current",
	"TypefaceCollection_1GetEnumerator",
	"Typeface_1FontFamily",
	"Typeface_1Stretch",
	"Typeface_1Style",
	"Typeface_1Weight",
	"UIElementCollection_1Add",
	"UIElementCollection_1Clear",
	"UIElementCollection_1Contains",
	"UIElementCollection_1Count",
	"UIElementCollection_1Current",
	"UIElementCollection_1GetEnumerator",
	"UIElementCollection_1IndexOf",
	"UIElementCollection_1Insert",
	"UIElementCollection_1Remove",
	"UIElementCollection_1default",
	"UIElement_1AddHandler",
	"UIElement_1AllowDrop",
	"UIElement_1BeginAnimation",
	"UIElement_1CaptureMouse",
	"UIElement_1Clip",
	"UIElement_1ClipToBounds",
	"UIElement_1DesiredSize",
	"UIElement_1DragEnter",
	"UIElement_1DragEnterEvent",
	"UIElement_1DragLeave",
	"UIElement_1DragLeaveEvent",
	"UIElement_1DragOver",
	"UIElement_1DragOverEvent",
	"UIElement_1Drop",
	"UIElement_1DropEvent",
	"UIElement_1Focus",
	"UIElement_1Focusable",
	"UIElement_1GiveFeedback",
	"UIElement_1GiveFeedbackEvent",
	"UIElement_1InputHitTest",
	"UIElement_1InvalidateVisual",
	"UIElement_1IsEnabled__I",
	"UIElement_1IsEnabled__IZ",
	"UIElement_1IsFocused",
	"UIElement_1IsHitTestVisible",
	"UIElement_1IsKeyboardFocusWithin",
	"UIElement_1IsKeyboardFocused",
	"UIElement_1IsMeasureValid",
	"UIElement_1IsMouseOver",
	"UIElement_1IsVisible",
	"UIElement_1KeyDown",
	"UIElement_1KeyUp",
	"UIElement_1LostKeyboardFocus",
	"UIElement_1Measure",
	"UIElement_1MouseDown",
	"UIElement_1MouseEnter",
	"UIElement_1MouseLeave",
	"UIElement_1MouseMove",
	"UIElement_1MouseUp",
	"UIElement_1MouseWheel",
	"UIElement_1MoveFocus",
	"UIElement_1Opacity",
	"UIElement_1OpacityProperty",
	"UIElement_1PreviewGotKeyboardFocus",
	"UIElement_1PreviewKeyDown",
	"UIElement_1PreviewKeyUp",
	"UIElement_1PreviewLostKeyboardFocus",
	"UIElement_1PreviewMouseDown",
	"UIElement_1PreviewMouseMove",
	"UIElement_1PreviewMouseUp",
	"UIElement_1PreviewMouseWheel",
	"UIElement_1PreviewTextInput",
	"UIElement_1QueryContinueDrag",
	"UIElement_1QueryContinueDragEvent",
	"UIElement_1ReleaseMouseCapture",
	"UIElement_1RemoveHandler",
	"UIElement_1SnapsToDevicePixels",
	"UIElement_1TextInput",
	"UIElement_1TranslatePoint",
	"UIElement_1UpdateLayout",
	"UIElement_1Visibility__I",
	"UIElement_1Visibility__IB",
	"UIElement_1VisibilityProperty",
	"VirtualizingStackPanel_1VerticalOffset",
	"VisualTreeHelper_1GetChild",
	"VisualTreeHelper_1GetChildrenCount",
	"VisualTreeHelper_1GetParent",
	"Visual_1IsAncestorOf",
	"Visual_1IsDescendantOf",
	"Visual_1PointFromScreen",
	"Visual_1PointToScreen",
	"WebBrowserDocumentCompletedEventArgs_1Url",
	"WebBrowserNavigatedEventArgs_1Url",
	"WebBrowserNavigatingEventArgs_1Url",
	"WebBrowserProgressChangedEventArgs_1CurrentProgress",
	"WebBrowserProgressChangedEventArgs_1MaximumProgress",
	"WebBrowser_1CanGoBack",
	"WebBrowser_1CanGoForward",
	"WebBrowser_1Document",
	"WebBrowser_1DocumentCompleted",
	"WebBrowser_1DocumentText",
	"WebBrowser_1DocumentTitle",
	"WebBrowser_1DocumentTitleChanged",
	"WebBrowser_1GoBack",
	"WebBrowser_1GoForward",
	"WebBrowser_1Navigate",
	"WebBrowser_1Navigated",
	"WebBrowser_1Navigating",
	"WebBrowser_1ProgressChanged",
	"WebBrowser_1ReadyState",
	"WebBrowser_1Refresh",
	"WebBrowser_1ScriptErrorsSuppressed",
	"WebBrowser_1StatusText",
	"WebBrowser_1StatusTextChanged",
	"WebBrowser_1Stop",
	"WebBrowser_1Url",
	"WindowCollection_1Count",
	"WindowCollection_1Current",
	"WindowCollection_1GetEnumerator",
	"Window_1Activate",
	"Window_1Activated",
	"Window_1AllowsTransparency",
	"Window_1Close",
	"Window_1Closing",
	"Window_1Deactivated",
	"Window_1GetWindow",
	"Window_1Hide",
	"Window_1Icon",
	"Window_1IsActive",
	"Window_1Left__I",
	"Window_1Left__ID",
	"Window_1LocationChanged",
	"Window_1Owner",
	"Window_1ResizeMode",
	"Window_1Show",
	"Window_1ShowInTaskbar",
	"Window_1Title__I",
	"Window_1Title__II",
	"Window_1Top__I",
	"Window_1Top__ID",
	"Window_1Topmost",
	"Window_1WindowState__I",
	"Window_1WindowState__II",
	"Window_1WindowStyle",
	"WindowsFormsHost_1Child",
	"WriteableBitmap_1WritePixels",
	"XamlReader_1Load",
	"XmlReader_1Create",
	"gcnew_1AccessText",
	"gcnew_1Application",
	"gcnew_1ArcSegment",
	"gcnew_1ArrayList",
	"gcnew_1BezierSegment",
	"gcnew_1Binding__",
	"gcnew_1Binding__I",
	"gcnew_1Bitmap",
	"gcnew_1BitmapImage",
	"gcnew_1BitmapPalette",
	"gcnew_1Button",
	"gcnew_1CancelEventHandler",
	"gcnew_1Canvas",
	"gcnew_1CharacterHit",
	"gcnew_1CheckBox",
	"gcnew_1ColorDialog",
	"gcnew_1ColorList",
	"gcnew_1ColumnDefinition",
	"gcnew_1CombinedGeometry",
	"gcnew_1ComboBox",
	"gcnew_1ComboBoxItem",
	"gcnew_1CompositeCollection",
	"gcnew_1ContentControl",
	"gcnew_1ContextMenu",
	"gcnew_1ContextMenuEventHandler",
	"gcnew_1ControlTemplate",
	"gcnew_1CroppedBitmap",
	"gcnew_1DashStyle",
	"gcnew_1DataObject",
	"gcnew_1DataTemplate",
	"gcnew_1DiscreteDoubleKeyFrame",
	"gcnew_1DispatcherFrame",
	"gcnew_1DispatcherHookEventHandler",
	"gcnew_1DispatcherTimer",
	"gcnew_1DoubleAnimationUsingKeyFrames",
	"gcnew_1DoubleCollection",
	"gcnew_1DragEventHandler",
	"gcnew_1DrawingVisual",
	"gcnew_1Duration",
	"gcnew_1EllipseGeometry",
	"gcnew_1EventHandler",
	"gcnew_1ExecutedRoutedEventHandler",
	"gcnew_1Expander",
	"gcnew_1FileInfo",
	"gcnew_1FolderBrowserDialog",
	"gcnew_1Font",
	"gcnew_1FontDialog",
	"gcnew_1FontFamily",
	"gcnew_1FormatConvertedBitmap",
	"gcnew_1FormattedText",
	"gcnew_1Frame",
	"gcnew_1FrameworkElementFactory__I",
	"gcnew_1FrameworkElementFactory__II",
	"gcnew_1GeometryGroup",
	"gcnew_1GiveFeedbackEventHandler",
	"gcnew_1Grid",
	"gcnew_1GridLength",
	"gcnew_1GridView",
	"gcnew_1GridViewColumn",
	"gcnew_1GridViewColumnCollection",
	"gcnew_1GridViewColumnHeader",
	"gcnew_1GroupBox",
	"gcnew_1Hyperlink",
	"gcnew_1Image",
	"gcnew_1ImageBrush",
	"gcnew_1Int32",
	"gcnew_1Int32Rect",
	"gcnew_1IntPtr",
	"gcnew_1KeyEventHandler",
	"gcnew_1KeyboardFocusChangedEventHandler",
	"gcnew_1Label",
	"gcnew_1LineSegment",
	"gcnew_1LinearGradientBrush__IID",
	"gcnew_1LinearGradientBrush__IIII",
	"gcnew_1ListBox",
	"gcnew_1ListBoxItem",
	"gcnew_1ListView",
	"gcnew_1ListViewItem",
	"gcnew_1Matrix",
	"gcnew_1MatrixTransform",
	"gcnew_1MemoryStream",
	"gcnew_1Menu",
	"gcnew_1MenuItem",
	"gcnew_1MouseButtonEventHandler",
	"gcnew_1MouseEventHandler",
	"gcnew_1MouseWheelEventHandler",
	"gcnew_1NoArgsDelegate",
	"gcnew_1OpenFileDialog",
	"gcnew_1PasswordBox",
	"gcnew_1Path",
	"gcnew_1PathFigure",
	"gcnew_1PathGeometry",
	"gcnew_1Pen",
	"gcnew_1Point",
	"gcnew_1PointCollection",
	"gcnew_1PolyLineSegment",
	"gcnew_1Popup",
	"gcnew_1ProgressBar",
	"gcnew_1QuadraticBezierSegment",
	"gcnew_1QueryContinueDragEventHandler",
	"gcnew_1RadioButton",
	"gcnew_1Rect",
	"gcnew_1Rectangle",
	"gcnew_1RectangleGeometry",
	"gcnew_1RenderTargetBitmap",
	"gcnew_1RepeatButton",
	"gcnew_1ResourceDictionary",
	"gcnew_1RoutedEventHandler",
	"gcnew_1RoutedPropertyChangedEventHandler",
	"gcnew_1RoutedPropertyChangedEventHandlerObject",
	"gcnew_1RowDefinition",
	"gcnew_1Run",
	"gcnew_1SWTCanvas",
	"gcnew_1SWTCellConverter",
	"gcnew_1SWTRow",
	"gcnew_1SWTSafeHandle",
	"gcnew_1SWTTextEmbeddedObject",
	"gcnew_1SWTTextParagraphProperties",
	"gcnew_1SWTTextRunProperties",
	"gcnew_1SWTTextSource",
	"gcnew_1SWTTreeView",
	"gcnew_1SWTTreeViewRowPresenter",
	"gcnew_1SaveFileDialog",
	"gcnew_1ScaleTransform",
	"gcnew_1ScrollBar",
	"gcnew_1ScrollEventHandler",
	"gcnew_1ScrollViewer",
	"gcnew_1SelectionChangedEventHandler",
	"gcnew_1Separator",
	"gcnew_1Setter",
	"gcnew_1SetterVisibility",
	"gcnew_1Size__",
	"gcnew_1Size__DD",
	"gcnew_1SizeChangedEventHandler",
	"gcnew_1Slider",
	"gcnew_1SolidColorBrush",
	"gcnew_1StackPanel",
	"gcnew_1StreamGeometry",
	"gcnew_1String___3C",
	"gcnew_1String___3CII",
	"gcnew_1StringReader",
	"gcnew_1Style",
	"gcnew_1TabControl",
	"gcnew_1TabItem",
	"gcnew_1TemplateBindingExtension",
	"gcnew_1TextBlock",
	"gcnew_1TextBox",
	"gcnew_1TextChangedEventHandler",
	"gcnew_1TextCharacters",
	"gcnew_1TextCompositionEventHandler",
	"gcnew_1TextDecorationCollection",
	"gcnew_1TextEndOfLine",
	"gcnew_1TextEndOfParagraph",
	"gcnew_1TextTabProperties",
	"gcnew_1TextTabPropertiesCollection",
	"gcnew_1Thickness",
	"gcnew_1TiffBitmapEncoder",
	"gcnew_1TimeSpan",
	"gcnew_1TimerHandler",
	"gcnew_1ToggleButton",
	"gcnew_1ToolBar",
	"gcnew_1ToolBarTray",
	"gcnew_1TransformGroup",
	"gcnew_1TranslateTransform",
	"gcnew_1TraversalRequest",
	"gcnew_1TreeView",
	"gcnew_1TreeViewItem",
	"gcnew_1Typeface",
	"gcnew_1Uri",
	"gcnew_1UserControl",
	"gcnew_1WebBrowser",
	"gcnew_1WebBrowserDocumentCompletedEventHandler",
	"gcnew_1WebBrowserNavigatedEventHandler",
	"gcnew_1WebBrowserNavigatingEventHandler",
	"gcnew_1WebBrowserProgressChangedEventHandler",
	"gcnew_1Window",
	"gcnew_1WindowsFormsHost",
	"gcnew_1WriteableBitmap__I",
	"gcnew_1WriteableBitmap__IIDDII",
	"memcpy__I_3BI",
	"memcpy___3BII",
	"memcpy___3CII",
};

#define STATS_NATIVE(func) Java_org_eclipse_swt_tools_internal_NativeStats_##func

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCount)
	(JNIEnv *env, jclass that)
{
	return OS_nativeFunctionCount;
}

JNIEXPORT jstring JNICALL STATS_NATIVE(OS_1GetFunctionName)
	(JNIEnv *env, jclass that, jint index)
{
	return env->NewStringUTF(OS_nativeFunctionNames[index]);
}

JNIEXPORT jint JNICALL STATS_NATIVE(OS_1GetFunctionCallCount)
	(JNIEnv *env, jclass that, jint index)
{
	return OS_nativeFunctionCallCount[index];
}

#endif
