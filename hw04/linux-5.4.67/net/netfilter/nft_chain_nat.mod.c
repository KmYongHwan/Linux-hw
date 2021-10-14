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
	{ 0x94b4dbde, "nf_nat_ipv4_unregister_fn" },
	{ 0x5d5834f, "nf_nat_ipv4_register_fn" },
	{ 0x6d53cb71, "nf_nat_ipv6_unregister_fn" },
	{ 0x14ec1137, "nf_nat_ipv6_register_fn" },
	{ 0xb09fe3b2, "nft_unregister_chain_type" },
	{ 0x2b7f1340, "nft_register_chain_type" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x93f26cf9, "nft_do_chain" },
	{ 0x9b128b31, "ipv6_find_hdr" },
	{ 0x87eb0d8f, "nf_nat_inet_register_fn" },
	{ 0x554e2089, "nf_nat_inet_unregister_fn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_nat,nf_tables");


MODULE_INFO(srcversion, "127E6F28303A0DD67539F6A");
