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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x42041512, "i2c_get_dma_safe_msg_buf" },
	{ 0xa895ebae, "amd_mp2_rw" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ee4e2e0, "set_primary_fwnode" },
	{ 0x8cc9bf4a, "i2c_acpi_find_bus_speed" },
	{ 0xd87c7ca9, "device_link_add" },
	{ 0x555f5796, "amd_mp2_register_cb" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x98d2a6b4, "amd_mp2_find_device" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x7f470d59, "amd_mp2_unregister_cb" },
	{ 0x75417517, "amd_mp2_bus_enable_set" },
	{ 0x5b8c2c62, "amd_mp2_rw_timeout" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x4dae16e4, "i2c_put_dma_safe_msg_buf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xebb7d831, "amd_mp2_process_event" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-amd-mp2-pci");

MODULE_ALIAS("acpi*:AMDI0011:*");

MODULE_INFO(srcversion, "50A5CC89DC227602FE519FD");
