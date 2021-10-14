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
	{ 0xaf73a2c3, "lwtunnel_encap_del_ops" },
	{ 0xf49942b3, "lwtunnel_encap_add_ops" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb46b2ae5, "nla_put_labels" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c7d0322, "lwtunnel_state_alloc" },
	{ 0xe413b0a4, "nla_get_labels" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x3419d58, "__skb_warn_lro_forwarding" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1def7190, "neigh_xmit" },
	{ 0xed95bdce, "mpls_stats_inc_outucastpkts" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xe2510b9f, "mpls_pkt_too_big" },
	{ 0xe1785d31, "mpls_dev_mtu" },
	{ 0x2d0e57f7, "mpls_output_possible" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mpls_router");


MODULE_INFO(srcversion, "048A96D3F8D47F731D4293C");
