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
	{ 0x778af190, "dfl_fpga_cdev_release_port" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3893196e, "dfl_fpga_cdev_assign_port" },
	{ 0xdd995686, "dfl_fpga_dev_ops_register" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbcbedc0a, "fpga_image_info_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xb9929b2b, "dfl_fpga_dev_feature_uinit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xba312d7b, "current_task" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7ea19302, "put_device" },
	{ 0x729cbf90, "dfl_fpga_dev_feature_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6cbe5161, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb2b884c, "fpga_bridges_put" },
	{ 0x6fbe41a0, "dfl_fpga_dev_ops_unregister" },
	{ 0xa3b45159, "fpga_image_info_free" },
	{ 0x96848186, "scnprintf" },
	{ 0x39af3827, "fpga_region_program_fpga" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xa71c278d, "fpga_region_class_find" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "dfl,fpga-mgr,fpga-bridge,fpga-region");


MODULE_INFO(srcversion, "077356B10F52BD543F2D9CA");
