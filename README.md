[![SWT Matrix Build](https://github.com/eclipse-platform/eclipse.platform.swt/actions/workflows/maven.yml/badge.svg)](https://github.com/eclipse-platform/eclipse.platform.swt/actions/workflows/maven.yml) ![SWT Matrix Tests](https://gist.githubusercontent.com/eclipse-releng-bot/78d110a601baa4ef777ccb472f584038/raw/71510599eb84e852f3e135aa7a3ddf33854ca716/badge.svg)

* Eclipse SWT
  * == cross-platform GUI library -- for -- JVM based desktop applications
    * -> includes platform-specific ".jar"
  * _Example:_ [Eclipse](https://www.eclipse.org)
  * 👀ALMOST ENTIRELY developed -- by -- volunteers 👀

# Getting Started

* steps
  * download it [here](https://download.eclipse.org/eclipse/downloads/index.html)
  * add the ".jar" | YOUR classpath

* _Example:_
  * TODO: How to create a NEW Eclipse project? 

![Example](example.png)
```java
import org.eclipse.swt.SWT;
import org.eclipse.swt.layout.GridData;
import org.eclipse.swt.layout.GridLayout;
import org.eclipse.swt.widgets.Button;
import org.eclipse.swt.widgets.Display;
import org.eclipse.swt.widgets.Label;
import org.eclipse.swt.widgets.Shell;
import org.eclipse.swt.widgets.Text;

public class HelloWorld {

	public static void main(String[] args) {
		final Display display = new Display();

		final Shell shell = new Shell(display);
		shell.setText("Hello World");
		shell.setLayout(new GridLayout(2, false));

		final Label label = new Label(shell, SWT.LEFT);
		label.setText("Your &Name:");
		label.setLayoutData(new GridData(SWT.FILL, SWT.CENTER, false, false));

		final Text text = new Text(shell, SWT.BORDER | SWT.SINGLE);
		final GridData data = new GridData(SWT.FILL, SWT.CENTER, true, false);
		data.minimumWidth = 120;
		text.setLayoutData(data);

		final Button button = new Button(shell, SWT.PUSH);
		button.setText("Say Hello");
		shell.setDefaultButton(button);
		button.setLayoutData(new GridData(SWT.END, SWT.CENTER, false, false, 2, 1));

		final Label output = new Label(shell, SWT.CENTER);
		output.setLayoutData(new GridData(SWT.FILL, SWT.CENTER, true, false, 2, 1));

		button.addListener(SWT.Selection, event -> {
			String name = text.getText().trim();
			if (name.length() == 0) {
				name = "world";
			}
			output.setText("Hello " + name + "!");
		});

		shell.setSize(shell.computeSize(SWT.DEFAULT, SWT.DEFAULT));
		shell.open();

		while (!shell.isDisposed()) {
			if (!display.readAndDispatch()) {
				display.sleep();
			}
		}

		display.dispose();
	}
}
```
First, a `Display` is created which is something like the central place of all GUI-related code.
Then a `Shell` is created which in our example is a top-level window.
Then all child controls and listeners are created, including their layout information.
Finally, we set the window's size determines by its child controls and open the window.
The `while`-loop processes all GUI related events until the shell is disposed which happens when closing.
Before exiting, any claimed GUI resources needs to be freed.

# Contributing to SWT

* follow [Eclipse Platform's CONTRIBUTING](https://github.com/eclipse-platform/.github/blob/main/CONTRIBUTING.md)
* steps
  * create a Eclipse Development Environment -- [link](https://www.eclipse.org/setups/installer/?url=https://raw.githubusercontent.com/eclipse-platform/eclipse.platform.swt/master/bundles/org.eclipse.swt.tools/Oomph/PlatformSWTConfiguration.setup&show=true) --
    * [.setup used](bundles/org.eclipse.swt.tools/Oomph/PlatformSWTConfiguration.setup)

## Developer Resources

* see [Eclipse FAQ](https://github.com/eclipse-platform/eclipse.platform/blob/master/docs/FAQ/The_Official_Eclipse_FAQs.md#standard-widget-toolkit-swt)

## Contact

* [project's "dev" list](https://accounts.eclipse.org/mailing-list/platform-dev)

## CURRENT Bugs

* see [Bugzilla](https://bugs.eclipse.org/bugs/buglist.cgi?product=Platform&component=SWT)

# Prototype | 1! Cross-Platform SWT Implementation

* see [here](https://github.com/swt-initiative31)
* Reasons: 🧠
  * reduce maintenance efforts,
  * enable better look and feel
  * improve configurability 🧠
* technologies suggested
  * Skia with Visual Class Library (VCL), 
  * [Skia + custom-rendered widgets](https://github.com/swt-initiative31/prototype-skija), 
  * [GTK](https://github.com/swt-initiative31/prototype-gtk),
  * Swing
