# https://leetcode.com/problems/subdomain-visit-count/description/

class Solution:
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        g_count = dict()
        for item in cpdomains:
            count, domain = item.split(' ')
            count = int(count)
            domain = "." + domain
            while domain.find('.') != -1:
                idx = domain.find('.')
                domain = domain[idx+1:]
                
                if g_count.get(domain) is None:
                    g_count[domain] = count
                else:
                    g_count[domain] += count

        return [" ".join([str(v), k]) for k,v in sorted(g_count.items())]
