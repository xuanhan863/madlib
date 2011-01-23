/*!
 * @defgroup quantile Quantile
 * This function computes the specified quantile value. It reads the name of the table, the specific column, and
 * For a different implementation of quantile check out the cmsketch_centile() 
 * aggregate in \link countmin CountMin (Cormode-Muthukrishnan) \endlink module. 
 * \par
 * None
 * \par
 * Function: <tt>quantile( '<em>table_name</em>', '<em>col_name</em>',
 *  <em>quantile</em>)</tt>
 * \par
 * Parameters:
 * - <em>table_name</em> (TEXT) - name of the table from which quantile is to be taken
 * \par
 * 1) Prepare some input:
 * \code
 * \par
 * 2) Run the quantile() function:
 * \code
 * \see
 * \link countmin CountMin (Cormode-Muthukrishnan) \endlink
 */