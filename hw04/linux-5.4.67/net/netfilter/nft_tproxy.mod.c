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
	{ 0x47c27c2c, "nft_unregister_expr" },
	{ 0x5407d6bf, "nft_register_expr" },
	{ 0x193a1f5d, "nf_tproxy_handle_time_wait6" },
	{ 0x3cf50cde, "sock_gen_put" },
	{ 0x412dd7ca, "nf_tproxy_handle_time_wait4" },
	{ 0x83a446a0, "nf_tproxy_laddr6" },
	{ 0xf49b55db, "nf_tproxy_get_sock_v6" },
	{ 0x2e68187d, "sock_edemux" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf2d07831, "nf_tproxy_laddr4" },
	{ 0xafed4017, "nf_tproxy_get_sock_v4" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x97341f13, "nf_defrag_ipv6_enable" },
	{ 0x46eab8f2, "nf_defrag_ipv4_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9d51026, "nft_dump_register" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_tproxy_ipv6,nf_tproxy_ipv4,nf_defrag_ipv6,nf_defrag_ipv4");


MODULE_INFO(srcversion, "6D3CF7CFB3415B188A20548");
