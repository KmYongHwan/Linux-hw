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
	{ 0x76a5e8cb, "nf_ct_bridge_unregister" },
	{ 0xcc8a3931, "nf_ct_bridge_register" },
	{ 0x15314fce, "consume_skb" },
	{ 0x6fd49081, "ip_fraglist_prepare" },
	{ 0xe9598933, "ip_fraglist_init" },
	{ 0x7c083e8, "skb_checksum_help" },
	{ 0x6d8ffdd2, "br_ip6_fragment" },
	{ 0x747cdac0, "ip_frag_next" },
	{ 0x7c42a807, "ip_frag_init" },
	{ 0x9502c57e, "__nf_conntrack_confirm" },
	{ 0x74b6fce4, "nf_confirm" },
	{ 0x7ade4caf, "nf_ct_deliver_cached_events" },
	{ 0xace2f5bb, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95a9d784, "pskb_trim_rcsum_slow" },
	{ 0x7fc80ca5, "__pskb_pull_tail" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x2d1a1a5a, "ip_defrag" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xfae8b150, "nf_conntrack_in" },
	{ 0x98d30d9f, "nf_ct_frag6_gather" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xe8bc4666, "br_dev_queue_push_xmit" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_defrag_ipv6,bridge");


MODULE_INFO(srcversion, "A3F03BAC86CE44020B4463C");
