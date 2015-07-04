public class J_Grid15{

	int [][] m_board;

	J_Grid15(){
		m_board = new int [3][3];
	}

	private void mb_outputGridBowBoard(){
		int i;
		System.out.print("+");
		for(i=0;i<5;i++)
			System.out.print("-");
		System.out.println("+");
	}

	private void mb_outputGridBowBoard(int i){
		int j;
		for(j=0;j<m_board[i].length;j++)
			System.out.print("|"+m_board[i][j]);
		System.out.println("|");
	}

	public void mb_outputGrid(){
		int i;
		mb_outputGridBowBoard();
		for(i=0;i<m_board.length;i++){
			mb_outputGridBowBoard(i);
			mb_outputGridBowBoard();
		}
	}

	private void mb_dataInit(){
		int i,j,k;
		for(i=0, k=1;i<m_board.length;i++)
			for(j=0;j<m_board[i].length;j++,k++)
				m_board[i][j]=k;
	}


	private boolean mb_dataEnd(){
		int i,j,k;
		for(i=0,k=9;i<m_board.length;i++)
			for(j=0;j<m_board[i].length;j++,k--)
				if(m_board[i][j]!=k)
					return (false);
		return (true);
	}

	private void mb_dataNext(){
		int i,j;
		for(i=m_board.length-1;i>=0;i--)
			for(j=m_board[i].length-1;j>=0;j--)
				if(m_board[i][j]==9)
					m_board[i][j]=1;
				else{
					m_board[i][j]++;
					return ;
				}
	}

	private boolean mb_dataCheckDifferent(){
		int i,j;
		int [] digit = new int [10];
		for(i=0;i<m_board.length;i++)
			for(j=0;j<m_board[i].length;j++)
				digit[m_board[i][j]]=1;
		for(i=1,j=0;i<digit.length;i++)
			j+=digit[i];
		if(j==9)
			return (true);
		return(false);
	}

	private boolean mb_dataCheckSumRow(){
		int i,j,k;
		for(i=0;i<m_board.length;i++){
			for(j=0,k=0;j<m_board[i].length;j++)
				k+=m_board[i][j];
			if(k!=15)
				return (false);
		}
		return(true);
	}

	private boolean mb_dataCheckSumColumn(){
		int i,j,k;
		for(i=0;i<m_board.length;i++){
			for(j=0,k=0;j<m_board.length;j++)
				k+=m_board[j][i];
			if(k!=15)
				return (false);
		}
		return (true);
	}

	private boolean mb_dataCheck(){
		if(!mb_dataCheckDifferent())
			return (false);
		if(!mb_dataCheckSumRow())
			return (false);
		if(!mb_dataCheckSumColumn())
			return (false);
		if(m_board[0][0]+m_board[1][1]+m_board[2][2]!=15)
			return (false);
		if(m_board[0][2]+m_board[1][1]+m_board[2][0]!=15)
			return (false);
		return(true);
	}

	public void mb_arrange(){
		int n=1;
		for(mb_dataInit();!mb_dataEnd();mb_dataNext()){
			if(mb_dataCheck()){
				System.out.println("The "+n+" result:");
				n++;
				mb_outputGrid();
			}
		}
	}

	public static void main(String[] args) {
			J_Grid15 a= new J_Grid15();
			a.mb_arrange();
	}
}