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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x12f43a55, "icmpv6_send" },
	{ 0xa8b80792, "dst_release" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0x37afe692, "nf_ct_attach" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x2493bc40, "l3mdev_master_ifindex_rcu" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x5df0f16e, "ip6_route_output_flags" },
	{ 0xace2f5bb, "ipv6_skip_exthdr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x89ff1e0d, "ip6_local_out" },
	{ 0xc2fbda5, "ip6_dst_hoplimit" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x112dfe9e, "xfrm_lookup" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x42d32240, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EE3C9ED3747E193AAFF85F7");
