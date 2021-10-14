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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x479247f1, "power_supply_unregister" },
	{ 0x8688f0dc, "power_supply_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x23a6d701, "gb_connection_enable_tx" },
	{ 0x3a0b85fb, "power_supply_get_drvdata" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5f1ce799, "greybus_register_driver" },
	{ 0xc9ac3e5e, "greybus_deregister_driver" },
	{ 0x5dc4578a, "gb_operation_sync_timeout" },
	{ 0x5c03fd94, "gb_connection_destroy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x9ce24b36, "gb_operation_request_send_sync_timeout" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x2345868f, "gb_connection_enable" },
	{ 0xc245a634, "power_supply_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x563a20e5, "gb_connection_create" },
	{ 0x61ea921a, "gb_connection_disable" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6114f186, "power_supply_register" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3b6475ec, "gb_operation_put" },
	{ 0x872495cf, "gb_operation_create_flags" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "greybus");


MODULE_INFO(srcversion, "462FDEDE7302F1C12FE87BB");
