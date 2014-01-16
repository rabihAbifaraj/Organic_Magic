import javax.swing.*;

public class main 
{

	/**
	 * @param args
	 */
	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		SwingUtilities.invokeLater(new Runnable()
		{
			public void run() {
				GUIgenerate();
			}
		});

	}
	public JPanel createContentPane()
	{
		JPanel aWildPanel = new JPanel();
		//all widgets will be placed here
		
		aWildPanel.setOpaque(true);
		return aWildPanel;
	}
	
	private static void GUIgenerate()
	{
		//the default 'Look and Feel'
		//JFrame.setDefaultLookAndFeelDecorated(true);
		JFrame frame = new JFrame();
		//create separate pane to edit content pane for ease
		main aDemoPane = new main();
		frame.setContentPane(aDemoPane.createContentPane());
		//ensure close button operation is consistent
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		//to size window based on widgets in
		frame.pack();
		//make visible
		frame.setVisible(true);
		//frame.setResizable(true);
	}
}
