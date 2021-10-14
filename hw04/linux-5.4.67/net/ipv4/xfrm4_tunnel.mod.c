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
	{ 0x6b0e208d, "xfrm4_tunnel_deregister" },
	{ 0xf4ab071, "xfrm_unregister_type" },
	{ 0x42b76ac4, "xfrm4_tunnel_register" },
	{ 0xc5850110, "printk" },
	{ 0xdded2805, "xfrm_register_type" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x167ad61b, "xfrm_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tunnel4");


MODULE_INFO(srcversion, "30D96239C28F6F8E12362AA");
