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
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0A12p5D10d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DA36753D3BC37A8421C3DC1");
