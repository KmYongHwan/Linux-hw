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
	{ 0x85bd1608, "__request_region" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x6e4ce7a4, "fb_bl_default_curve" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5f2fcc83, "ioremap_uc" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001002d00004758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004358sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004554sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004754sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005655sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004755sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004756sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004757sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004759sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000475Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004744sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004749sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000474Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000474Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000474Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000474Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004753sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C53sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "83D7C589E6AF47C2839F805");
