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
	{ 0xc5850110, "printk" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x91e6cb6c, "blackhole_netdev" },
	{ 0x38a9f7c5, "in6addr_loopback" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xfc2d702f, "__alloc_skb" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B36C41C8F871ED7A9377642");
