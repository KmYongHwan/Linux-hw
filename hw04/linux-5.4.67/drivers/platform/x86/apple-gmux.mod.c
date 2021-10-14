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
	{ 0xe860f935, "pnp_unregister_driver" },
	{ 0x132af893, "pnp_register_driver" },
	{ 0x29361773, "complete" },
	{ 0x2c63e051, "apple_bl_register" },
	{ 0x8826c13b, "acpi_video_register" },
	{ 0x8eaf2a5f, "vga_switcheroo_unregister_handler" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xa4faf62a, "acpi_disable_gpe" },
	{ 0x40e253ec, "vga_switcheroo_register_handler" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x605e35f4, "bus_for_each_dev" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xdab0f892, "apple_bl_unregister" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x90b8ab4c, "pnp_get_resource" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "apple_bl,video");

MODULE_ALIAS("pnp:dAPP000B*");
MODULE_ALIAS("acpi*:APP000B:*");

MODULE_INFO(srcversion, "292230A022516AFA045264C");
