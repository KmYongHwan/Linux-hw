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
	{ 0xb398858, "xt_unregister_targets" },
	{ 0x1b0c3141, "xt_register_targets" },
	{ 0x412dd7ca, "nf_tproxy_handle_time_wait4" },
	{ 0xf2d07831, "nf_tproxy_laddr4" },
	{ 0xafed4017, "nf_tproxy_get_sock_v4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x193a1f5d, "nf_tproxy_handle_time_wait6" },
	{ 0x2e68187d, "sock_edemux" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3cf50cde, "sock_gen_put" },
	{ 0x83a446a0, "nf_tproxy_laddr6" },
	{ 0xf49b55db, "nf_tproxy_get_sock_v6" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x9b128b31, "ipv6_find_hdr" },
	{ 0x46eab8f2, "nf_defrag_ipv4_enable" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x97341f13, "nf_defrag_ipv6_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,nf_tproxy_ipv4,nf_tproxy_ipv6,nf_defrag_ipv4,nf_defrag_ipv6");


MODULE_INFO(srcversion, "D7DB050158C2CB7B3B5305A");
