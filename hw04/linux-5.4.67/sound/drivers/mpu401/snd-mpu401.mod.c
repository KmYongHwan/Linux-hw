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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xf0de439, "snd_mpu401_uart_new" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc363815f, "snd_card_disconnect" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xe860f935, "pnp_unregister_driver" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0x729a7be5, "snd_card_free_when_closed" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x132af893, "pnp_register_driver" },
	{ 0x65523885, "snd_card_new" },
	{ 0x90b8ab4c, "pnp_get_resource" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x6d52d252, "param_ops_long" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd-mpu401-uart,snd");

MODULE_ALIAS("pnp:dPNPb006*");
MODULE_ALIAS("acpi*:PNPB006:*");

MODULE_INFO(srcversion, "3D9F21361544FBFB7BC225F");
