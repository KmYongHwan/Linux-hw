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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x35db28d0, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xf44a972b, "driver_register" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x754d539c, "strlen" },
	{ 0x919dade8, "device_release_driver" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x80eb756f, "pm_runtime_no_callbacks" },
	{ 0x920e4ebf, "device_match_devt" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x752832c, "noop_llseek" },
	{ 0xb6f7270a, "device_add" },
	{ 0xfe50ef42, "bus_find_device" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xf720a60b, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "33296337130449D9CC1D41F");
