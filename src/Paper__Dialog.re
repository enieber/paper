[@bs.module "react-native-paper"] [@react.component]
external make:
  (
    ~visible: bool,
    ~onDismiss: unit => unit,
    ~dismissable: bool=?,
    ~theme: Paper__ThemeProvider.appTheme=?,
    ~style: ReactNative.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "Dialog";

module Actions = {
  [@bs.module "react-native-paper"] [@bs.scope "Dialog"] [@react.component]
  external make:
    (~style: ReactNative.Style.t=?, ~children: React.element) => React.element =
    "Actions";
};

module Content = {
  [@bs.module "react-native-paper"] [@bs.scope "Dialog"] [@react.component]
  external make:
    (~style: ReactNative.Style.t=?, ~children: React.element) => React.element =
    "Content";
};
module ScrollArea = {
  [@bs.module "react-native-paper"] [@bs.scope "Dialog"] [@react.component]
  external reactClass:
    (~style: ReactNative.Style.t=?, ~children: React.element) => React.element =
    "ScrollArea";
};

module Title = {
  [@bs.module "react-native-paper"] [@bs.scope "Dialog"] [@react.component]
  external make:
    (
      ~style: ReactNative.Style.t=?,
      ~theme: Paper__ThemeProvider.appTheme=?,
      ~children: React.element
    ) =>
    React.element =
    "Title";
};
