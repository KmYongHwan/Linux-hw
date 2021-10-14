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
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0x8d448251, "rfkill_alloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOA1655*:");
MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOL1310*:");
MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOM7440*:");

MODULE_INFO(srcversion, "930F81161A56DAB35D7AAD1");
