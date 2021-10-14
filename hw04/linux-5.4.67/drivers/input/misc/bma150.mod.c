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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x5d17929d, "input_register_polled_device" },
	{ 0x5f0e284b, "input_allocate_polled_device" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xff76d558, "input_register_device" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ada0011, "input_event" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x12a38747, "usleep_range" },
	{ 0x47a83910, "input_free_polled_device" },
	{ 0xc042b99a, "input_unregister_polled_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("i2c:bma150");
MODULE_ALIAS("i2c:smb380");
MODULE_ALIAS("i2c:bma023");

MODULE_INFO(srcversion, "20ADDE53B9D36D5B9192B33");
