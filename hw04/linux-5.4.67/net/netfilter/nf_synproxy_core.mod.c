#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x54fcfcf0, "nf_ct_tmpl_alloc" },
	{ 0xbdbbc1e3, "nf_ct_seqadj_init" },
	{ 0xc5e12505, "nf_ct_tmpl_free" },
	{ 0x76cbebf3, "ip_local_out" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x99678a4b, "inet_proto_csum_replace4" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x9674f8f8, "nf_unregister_net_hooks" },
	{ 0x9a5e7275, "skb_ensure_writable" },
	{ 0xa8f702fe, "ip_route_me_harder" },
	{ 0xe7eee3d5, "__cookie_v4_init_sequence" },
	{ 0x71f6670b, "__cookie_v6_check" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x5fb4da0a, "nf_register_net_hooks" },
	{ 0xace2f5bb, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x35fac541, "proc_create_net_data" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xbd3b70b9, "__nf_ip6_route" },
	{ 0xd5ab6c8e, "nf_ct_extend_unregister" },
	{ 0x6a5e2bde, "__cookie_v6_init_sequence" },
	{ 0xade21bc2, "nf_ct_extend_register" },
	{ 0xdaf5c16e, "__cookie_v4_check" },
	{ 0x89ff1e0d, "ip6_local_out" },
	{ 0x15314fce, "consume_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x112dfe9e, "xfrm_lookup" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x561f2fa3, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "F3F18CE52D2EC3916E8D1E6");
