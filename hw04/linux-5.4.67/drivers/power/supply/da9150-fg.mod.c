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
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x9ec43e96, "platform_get_irq_byname" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcebeeb50, "devm_power_supply_register" },
	{ 0x6a76b260, "da9150_set_bits" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6f280d75, "power_supply_changed" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1b623393, "da9150_write_qif" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb0c5f897, "da9150_read_qif" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "da9150-core");


MODULE_INFO(srcversion, "0EBF03687D867AD1C337241");
