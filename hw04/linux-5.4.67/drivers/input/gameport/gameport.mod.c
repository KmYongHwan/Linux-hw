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
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf44a972b, "driver_register" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x919dade8, "device_release_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xee86bd09, "cpu_info" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdff70856, "device_bind_driver" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7d2d038c, "device_attach" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb6f7270a, "device_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xf720a60b, "module_put" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x9415ca79, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xabb03ead, "driver_attach" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc3d38a82, "driver_find" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "08D3A2D120DA4DB5220C946");
