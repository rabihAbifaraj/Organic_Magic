import javax.swing.*;
import javax.swing.event.*;
import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class main implements ActionListener, ListSelectionListener
{
	/**
	 * @param args
	 */

	public JPanel createContentPane()
	{
		
		JPanel aWildPanel = new JPanel();//aWildPanel is the totalGui panel
		JList elements;
		
		//all widgets will be placed here
		String names[] = {"selectable","elements","a","b","c","d","e","f","g","h","i","j","k"};
		//here is the scroll with selectable elements
		elements = new JList(names);
		elements.setVisibleRowCount(10);
		elements.setFixedCellHeight(20);
		elements.setFixedCellWidth(100);
		elements.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
		elements.addListSelectionListener(this);
		
		//space out the widgets in the gui using boxLayout
		JPanel bottomPanel = new JPanel();
		bottomPanel.setLayout(new BoxLayout(bottomPanel, BoxLayout.LINE_AXIS));
		
		bottomPanel.add(Box.createRigidArea(new Dimension(10,0)));
		bottomPanel.add(elements);
		
		aWildPanel.add(bottomPanel);
		aWildPanel.setOpaque(true);
		return aWildPanel;
	}
	
	public void valueChanged(ListSelectionEvent e)
	{
		if(e.getValueIsAdjusting()==false)
		{
			
		}
	}
	public void actionPerformed(ActionEvent e)
	{
		
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
}
