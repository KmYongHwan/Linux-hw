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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xfd53e6b, "nf_ct_helper_expectfn_unregister" },
	{ 0x8957eb39, "nf_ct_helper_expectfn_register" },
	{ 0x382ec844, "nat_q931_hook" },
	{ 0x49d814fc, "nat_callforwarding_hook" },
	{ 0xac6bd1e8, "nat_h245_hook" },
	{ 0x8ca928c2, "nat_t120_hook" },
	{ 0x4f34dc7a, "nat_rtp_rtcp_hook" },
	{ 0x622f75bf, "set_ras_addr_hook" },
	{ 0x5191ddfa, "set_sig_addr_hook" },
	{ 0x64f9c7b4, "set_h225_addr_hook" },
	{ 0x9cb4071e, "set_h245_addr_hook" },
	{ 0xab5b8a7a, "nf_ct_unexpect_related" },
	{ 0x9835dd97, "get_h225_addr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9f38e93b, "nf_ct_expect_related_report" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x286f89ba, "__nf_nat_mangle_tcp_packet" },
	{ 0xf50a70c9, "nf_nat_mangle_udp_packet" },
	{ 0x28ab51d2, "nf_nat_follow_master" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cc4232f, "nf_nat_setup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_h323,nf_nat");


MODULE_INFO(srcversion, "6444D29D128E41F19DC10B8");
