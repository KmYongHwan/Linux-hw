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
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0xdf548aa8, "nft_fib_validate" },
	{ 0xe3a50116, "nft_fib_dump" },
	{ 0x49b9867e, "nft_fib_init" },
	{ 0x47c27c2c, "nft_unregister_expr" },
	{ 0x5407d6bf, "nft_register_expr" },
	{ 0xd50a40c8, "nft_fib4_eval" },
	{ 0x5450303, "nft_fib4_eval_type" },
	{ 0x7c7865c2, "nft_fib6_eval" },
	{ 0x42b9d9c7, "nft_fib6_eval_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv4,nft_fib_ipv6");


MODULE_INFO(srcversion, "5F93EAAF60AAA2DDCAFC980");
