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
	{ 0x4e77c2da, "dsa_tag_drivers_register" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xdf9c39b8, "dsa_tag_drivers_unregister" },
	{ 0x1917d2f4, "dsa_port_vid_add" },
	{ 0x7f72d0c8, "dsa_port_vid_del" },
	{ 0xe596fa99, "br_vlan_get_pvid" },
	{ 0x47ebd616, "br_vlan_get_info" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0e602eb, "memmove" },
};

MODULE_INFO(depends, "dsa_core,bridge");


MODULE_INFO(srcversion, "3B9797E533FBC8F9C78541C");
