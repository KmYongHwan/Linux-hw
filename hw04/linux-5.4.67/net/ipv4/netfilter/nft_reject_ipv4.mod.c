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
	{ 0xa5f71562, "nft_reject_policy" },
	{ 0x4b95c6e7, "nft_reject_validate" },
	{ 0x23cfa620, "nft_reject_dump" },
	{ 0x41324cce, "nft_reject_init" },
	{ 0x47c27c2c, "nft_unregister_expr" },
	{ 0x5407d6bf, "nft_register_expr" },
	{ 0xa8f29c74, "nf_send_unreach" },
	{ 0x505ddd70, "nf_send_reset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_reject,nf_tables,nf_reject_ipv4");


MODULE_INFO(srcversion, "7445198463BC8BD6EB7117B");
